#include "Day24.h"
#pragma once

void runDay24()
{
	Node24* head = NULL;
	Solution24 mylist;
	int T, data;
	std::cin >> T;
	while (T-->0) {
		std::cin >> data;
		head = mylist.insert(head, data);
	}
	head = mylist.removeDuplicates(head);

	mylist.display(head);
}

Node24::Node24(int d)
{
	data = d;
	next = NULL;
}

Node24* Solution24::removeDuplicates(Node24 *head)
{
	Node24* current = head;

	while (current->next != NULL)
	{
		if (current->data == current->next->data)
		{	
			Node24* deleteMe = current->next;
			current->next = current->next->next;
			delete deleteMe;
		}
		else
		{
			current = current->next;
		}
	}

	return head;
}

Node24* Solution24::insert(Node24 *head, int data)
{
	Node24* p = new Node24(data);
	if (head == NULL) 
	{
		head = p;
	}
	else if (head->next == NULL) 
	{
		head->next = p;
	}
	else 
	{
		Node24 *start = head;
		while (start->next != NULL) 
		{
			start = start->next;
		}
		start->next = p;
	}
	return head;
}

void Solution24::display(Node24 *head)
{
	Node24 *start = head;
	while (start)
	{
		std::cout << start->data << " ";
		start = start->next;
	}
}