#include "Day14.h"
#pragma once

Difference::Difference(std::vector<int> elements)
	: elements(elements) {}

void Difference::computeDifference()
{
	int smallest = this->elements[0];
	int largest = this->elements[0];

	for (int i = 1; i < this->elements.size(); i++)
	{
		if (smallest > this->elements[i])
		{
			smallest = this->elements[i];
		}

		if (largest < this->elements[i])
		{
			largest = this->elements[i];
		}
	}

	this->maximumDifference = largest - smallest;
}

void runDay14()
{
	int N;
	std::cin >> N;

	std::vector<int> a;

	for (int i = 0; i < N; i++) {
		int e;
		std::cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	std::cout << d.maximumDifference;
}