//============================================================================
// Name        : BinaryTreeExtraCredit.cpp
// Author      : Jordan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

int main() {
	BinarySearchTree<int> binaryTree;

	int input;
	cout << "Enter a number(0 to exit):";
	cin >> input;

	while (input != 0)
	{
		binaryTree.insert(input);


		cout << "Enter a number(0 to exit):";
		cin >> input;
	}

	cout << "inorder traversal: ";
	binaryTree.inOrder();
	cout << endl;

	cout << "preorder traversal: ";
	binaryTree.preOrder();
	cout << endl;

	cout << "postorder traversal: ";
	binaryTree.postOrder();
	cout << endl;

	cout << "Node count: " << binaryTree.nodeCount() << endl;
	cout << "Leaves count: " << binaryTree.leaveCount() << endl;
	cout << "Height: " <<  binaryTree.height() << endl;
	return 0;
}
