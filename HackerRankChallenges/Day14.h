#pragma once
#include <iostream>
#include <vector>

class Difference
{
private:
	std::vector<int> elements;
	
public:
	int maximumDifference;
	Difference(std::vector<int> elements);
	void computeDifference();
};

void runDay14();
