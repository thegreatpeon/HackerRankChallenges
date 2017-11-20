#include "Day25.h"
#pragma once

void runDay25()
{
	int inputNum = 0, temp = 0;
	std::vector<int> inputList;
	bool prime;

	std::cin >> inputNum;
	for (int i = 0; i < inputNum; i++)
	{
		std::cin >> temp;
		inputList.push_back(temp);
	}

	for (int i = 0; i < inputNum; i++)
	{
		temp = 2;
		prime = true;

		if (inputList.at(i) == 1)
		{
			prime = false;
		}

		while (temp <= sqrt(inputList.at(i)) && prime)
		{
			if (inputList.at(i) % temp == 0)
			{
				prime = false;
			}
			else
			{
				temp++;
			}
		}

		if (prime)
		{
			std::cout << "Prime" << std::endl;
		}
		else
		{
			std::cout << "Not prime" << std::endl;
		}
	}
}