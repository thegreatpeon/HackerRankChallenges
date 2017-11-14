#include "Day22.h"
#pragma once

void runDay22()
{
	Solution22 myTree;
	Node22* root = NULL;
	int t;
	int data;

	std::cin >> t;

	while (t-- > 0) {
		std::cin >> data;
		root = myTree.insert(root, data);
	}
	int height = myTree.getHeight(root);
	std::cout << height;
}

Node22::Node22(int d)
{
	data = d;
	left = NULL;
	right = NULL;
}

Node22* Solution22::insert(Node22* root, int data)
{
	if (root == NULL) {
		return new Node22(data);
	}
	else {
		Node22* cur;
		if (data <= root->data) {
			cur = insert(root->left, data);
			root->left = cur;
		}
		else {
			cur = insert(root->right, data);
			root->right = cur;
		}

		return root;
	}
}

int Solution22::getHeight(Node22* root)
{
	if (root == NULL)
	{
		return -1;
	}
	else
	{
		int left = getHeight(root->left);
		int right = getHeight(root->right);

		return (left >= right ? left : right) + 1;
	}

}