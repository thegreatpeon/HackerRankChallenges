#pragma once
#include <iostream>

void runDay22();

class Node22 
{
public:
	int data;
	Node22 *left;
	Node22 *right;
	Node22(int d);
};

class Solution22
{
public:
	Node22* insert(Node22* root, int data);
	int getHeight(Node22* root);
};