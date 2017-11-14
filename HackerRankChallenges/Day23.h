#pragma once
#include <iostream>
#include <queue>

void runDay23();

class Node23
{
public:
	int data;
	Node23 *left;
	Node23 *right;
	Node23(int d);
};

class Solution23
{
public:
	Node23* insert(Node23* root, int data);
	void levelOrder(Node23* root);
};