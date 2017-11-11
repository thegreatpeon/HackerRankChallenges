#include "Day6.h"

void printString(std::string input)
{
	for (int i = 0; i < input.length(); i = i + 2)
	{
		std::cout << input[i];
	}

	std::cout << " ";

	for (int i = 1; i < input.length(); i = i + 2)
	{
		std::cout << input[i];
	}

	std::cout << std::endl;
}


void runDay6()
{
	int numOfInput;
	std::string inputStrings[10];
	std::cin >> numOfInput;

	for (int i = 0; i < numOfInput; i++)
	{
		std::cin >> inputStrings[i];
	}

	for (int i = 0; i < numOfInput; i++)
	{
		printString(inputStrings[i]);
	}
}