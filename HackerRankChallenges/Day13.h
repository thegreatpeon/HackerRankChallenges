#pragma once
#include <iostream>
#include <vector>
#include <string>

class Book
{
protected:
	std::string title;
	std::string author;
public:
	Book(std::string t, std::string a);
	virtual void display() = 0;

};

class MyBook
{
protected:
	std::string title;
	std::string author;
	int price;
public:
	MyBook(std::string t, std::string a, int p);
	void display();
};

void runDay13();
