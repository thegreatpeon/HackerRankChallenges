#include "Day9.h"

int factorial(int n) 
{
	// Complete this function
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return factorial(n - 1)*n;
	}
}

void runDay9() 
{
	int n;
	std::cin >> n;
	int result = factorial(n);
	std::cout << result << std::endl;
}