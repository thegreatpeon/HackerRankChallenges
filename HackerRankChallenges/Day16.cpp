#include "Day16.h"
#pragma once

void runDay16()
{
	std::string S;
	std::cin >> S;
	int result = 0;

	try
	{
		result = stoi(S);

		std::cout << result << std::endl;
	}
	catch(const std::invalid_argument& ia)
	{
		std::cout << "Bad String" << std::endl;
	}
	catch (const std::out_of_range& oor) 
	{
		std::cout << "Bad String" << std::endl;
	}
}