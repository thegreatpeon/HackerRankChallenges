#include "Day23.h"
#pragma once

void runDay23()
{
	Solution23 myTree;
	Node23* root = NULL;
	int T, data;
	std::cin >> T;
	while (T-->0) {
		std::cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.levelOrder(root);
}

Node23::Node23(int d)
{
	data = d;
	left = NULL;
	right = NULL;
}

Node23* Solution23::insert(Node23* root, int data)
{
	if (root == NULL) 
	{
		return new Node23(data);
	}
	else 
	{
		Node23* cur;
		if (data <= root->data) 
		{
			cur = insert(root->left, data);
			root->left = cur;
		}
		else 
		{
			cur = insert(root->right, data);
			root->right = cur;
		}

		return root;
	}
}

void Solution23::levelOrder(Node23* root)
{
	std::queue<Node23*> order;
	order.push(root);
	while (!order.empty())
	{
		std::cout << order.front()->data << " ";
		if (order.front()->left != NULL)
		{
			order.push(order.front()->left);
		}

		if (order.front()->right != NULL)
		{
			order.push(order.front()->right);
		}

		order.pop();
	}
}