#pragma once
#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int d);
};

class Solution
{
public:
	Node* insert(Node *head, int data);
	void display(Node *head);
};

void runDay15();
