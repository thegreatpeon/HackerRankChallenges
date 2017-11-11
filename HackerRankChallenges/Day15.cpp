#pragma once
#include "Day15.h"

Node::Node(int d)
	: data(d), next(NULL) {}

void Solution::display(Node *head)
{
	Node *start = head;
	while (start)
	{
		std::cout << start->data << " ";
		start = start->next;
	}
}

Node* Solution::insert(Node *head, int data)
{
	Node* newNode = new Node(data);

	if (head == NULL)
	{
		head = newNode;
	}
	else
	{
		Node* temp = head;

		//go to the end of the linked list
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newNode;
	}
	
	return head;
}

void runDay15()
{
	Node* head = NULL;
	Solution mylist;
	int T, data;
	std::cin >> T;
	while (T-->0) {
		std::cin >> data;
		head = mylist.insert(head, data);
	}
	mylist.display(head);
}