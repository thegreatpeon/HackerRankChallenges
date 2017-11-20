#include "Day26.h"
#pragma once

void runDay26()
{
	dateInfo returnedDate;
	dateInfo expectedDate;

	readInput(returnedDate, expectedDate);

	int fine = calculateFine(returnedDate, expectedDate);

	std::cout << fine;
}

dateInfo::dateInfo(int day, int month, int year)
	:day(day), month(month), year(year){}

dateInfo::dateInfo()
	: day(0), month(0), year(0) {}

void dateInfo::updateInfo(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void readInput(dateInfo &returnedDate, dateInfo &expectedDate)
{
	int day = 0, month = 0, year = 0;
	
	std::cin >> day;
	std::cin >> month;
	std::cin >> year;

	returnedDate.updateInfo(day, month, year);

	std::cin >> day;
	std::cin >> month;
	std::cin >> year;

	expectedDate.updateInfo(day, month, year);
}

int calculateFine(dateInfo &returnedDate, dateInfo &expectedDate)
{
	if (expectedDate.year > returnedDate.year)
	{
		return 0;
	}
	else if (expectedDate.year < returnedDate.year)
	{
		return 10000;
	}
	else
	{
		if (expectedDate.month > returnedDate.month)
		{
			return 0;
		}
		else if (expectedDate.month < returnedDate.month)
		{
			return 500 * (returnedDate.month - expectedDate.month);
		}
		else
		{
			if (expectedDate.day > returnedDate.day)
			{
				return 0;
			}
			else
			{
				return 15 * (returnedDate.day - expectedDate.day);
			}
		}
	}
}