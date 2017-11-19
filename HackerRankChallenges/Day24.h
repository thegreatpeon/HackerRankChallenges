#pragma once
#include <iostream>
#include <vector>

void runDay24();

class Node24
{
public:
	int data;
	Node24 *next;
	Node24(int d);
};

class Solution24
{
public:
	Node24* removeDuplicates(Node24 *head);
	Node24* insert(Node24 *head, int data);
	void display(Node24 *head);
};