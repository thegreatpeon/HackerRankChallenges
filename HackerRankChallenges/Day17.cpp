#pragma once
#include "Day17.h"

int Calculator::power(int x, int y)
{
	if (x < 0 || y < 0)
	{
		throw std::invalid_argument{ "n and p should be non-negative" };
	}
	return pow(x, y);
}

void runDay17()
{
	Calculator myCalculator = Calculator();
	int T, n, p;
	std::cin >> T;
	while (T-->0)
	{
		if (scanf("%d %d", &n, &p) == 2)
		{
			try
			{
				int ans = myCalculator.power(n, p);
				std::cout << ans << std::endl;
			}
			catch (std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}
}