#pragma once
#include <iostream>
#include <vector>

void runDay26();

class dateInfo
{
public:
	int day;
	int month;
	int year;

	dateInfo();
	dateInfo(int day, int month, int year);
	void updateInfo(int day, int month, int year);
};

void readInput(dateInfo &returnedDate, dateInfo &expectedDate);
int calculateFine(dateInfo &returnedDate, dateInfo &expectedDate);