#include "Day13.h"
#pragma once

Book::Book(std::string t, std::string a)
	: title(t), author(a) {}

MyBook::MyBook(std::string t, std::string a, int p)
	: title(t), author(a), price(p) {}

void MyBook::display()
{
	std::cout << "Title: " << title << std::endl << "Author: " << author << std::endl << "Price: " << price << std::endl;
}

void runDay13()
{
	std::string title, author;
	int price;
	std::getline(std::cin, title);
	std::getline(std::cin, author);
	std::cin >> price;
	MyBook novel(title, author, price);
	novel.display();
}