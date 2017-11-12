#include "Day19.h"
#pragma once

void runDay19()
{
	int n;
	std::cin >> n;
	AdvancedArithmetic *myCalculator = new Calculator19();
	int sum = myCalculator->divisorSum(n);
	std::cout << "I implemented: AdvancedArithmetic\n" << sum;
}

int Calculator19::divisorSum(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if ((n%i) == 0)
		{
			sum += i;
		}
	}

	return sum;
}