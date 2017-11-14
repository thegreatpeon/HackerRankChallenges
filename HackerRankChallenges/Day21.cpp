#include "Day21.h"
#pragma once

void runDay21()
{
	int n;

	std::cin >> n;
	std::vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		std::cin >> value;
		int_vector[i] = value;
	}

	std::cin >> n;
	std::vector<std::string> string_vector(n);
	for (int i = 0; i < n; i++) {
		std::string value;
		std::cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<std::string>(string_vector);
}

template <class myType>
void printArray(std::vector<myType> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a.at(i) << std::endl;
	}
}