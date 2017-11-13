#include "Day20.h"
#pragma once

void runDay20()
{
	int n;
	std::cin >> n;
	std::vector<int> a(n);
	for (int a_i = 0; a_i < n; a_i++) {
		std::cin >> a[a_i];
	}
	// Write Your Code Here
	
	int numSwaps = 0;

	for (int i = 0; i < n; i++)
	{
		int swaps = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			swaps += checkSwap(a[j], a[j + 1]);
		}

		if (swaps == 0)
		{
			break;
		}
		else
		{
			numSwaps += swaps;
		}
	}

	print(numSwaps,a[0], a[n-1]);
}

void print(int numSwaps, int firstElement, int lastElement)
{
	std::cout << "Array is sorted in " << numSwaps << " swaps." << std::endl;
	std::cout << "First Element: " << firstElement << std::endl;
	std::cout << "Last Element: " << lastElement << std::endl;
}

int checkSwap(int &left, int &right)
{
	int temp;

	if (left > right)
	{
		temp = left;
		left = right;
		right = temp;

		return 1;
	}

	return 0;
}