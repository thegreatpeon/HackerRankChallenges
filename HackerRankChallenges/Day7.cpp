#include "Day7.h"

void runDay7()
{
	int n;
	std::cin >> n;
	std::vector<int> input(n), output(n);
	for (int i = 0; i < n; i++) {
		std::cin >> input[i];
	}

	reverseArray(input, output);

	printArray(output);
}

void reverseArray(std::vector<int> &input, std::vector<int> &output)
{
	for (int i = 0; i < input.size(); i++)
	{
		output[input.size()-i-1] = input[i];
	}
}

void printArray(std::vector<int> &input)
{
	std::cout << input[0];

	for (int i = 1; i < input.size(); i++)
	{
		std::cout << " " << input[i];
	}

	std::cout << std::endl;
}