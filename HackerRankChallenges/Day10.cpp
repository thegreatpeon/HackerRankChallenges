#include "Day10.h"

void runDay10()
{
	int input, biggest = 0, current = 0;
	std::vector<int> binary;
	std::cin >> input;

	while (input > 0)
	{
		
		binary.push_back(input % 2);
		input = input / 2;
	}

	for (int i = 0; i < binary.size(); i++)
	{
		if (binary[i] == 1)
		{
			current++;

			if (current > biggest)
			{
				biggest = current;
			}
		}
		else
		{
			current = 0;
		}
	}

	std::cout << biggest;
}