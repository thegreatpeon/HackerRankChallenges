#include "Day11.h"

void runDay11()
{
	std::vector< std::vector<int> > hourglassArray(6, std::vector<int>(6));
	int currentHourglassTotal = 0, biggestHourglassTotal = -99999999;
	std::vector<int> biggestHourglass;
	for (int i = 0; i < 6; i++) 
	{
		for (int j = 0; j < 6; j++) 
		{
			std::cin >> hourglassArray[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			currentHourglassTotal =	hourglassArray[i]  [j]  +
									hourglassArray[i]  [j+1] + 
									hourglassArray[i]  [j+2] + 
									hourglassArray[i+1][j+1] + 
									hourglassArray[i+2][j]  + 
									hourglassArray[i+2][j+1] + 
									hourglassArray[i+2][j+2];

			if (currentHourglassTotal > biggestHourglassTotal)
			{
				biggestHourglassTotal = currentHourglassTotal;
				biggestHourglass.clear();
				biggestHourglass.push_back(hourglassArray[i]  [j]  );
				biggestHourglass.push_back(hourglassArray[i]  [j+1]);
				biggestHourglass.push_back(hourglassArray[i]  [j+2]);
				biggestHourglass.push_back(hourglassArray[i+1][j+1]);
				biggestHourglass.push_back(hourglassArray[i+2][j]  );
				biggestHourglass.push_back(hourglassArray[i+2][j+1]);
				biggestHourglass.push_back(hourglassArray[i+2][j+2]);
			}
		}
	}

	printHourglass(biggestHourglass);

	std::cout << biggestHourglassTotal;
}

void printHourglass(std::vector<int> hourglass)
{
	std::cout << hourglass[0] << " " << hourglass[1] << " " << hourglass[2] << std::endl;
	std::cout << " "		  << " " << hourglass[3] << " " << " "			<< std::endl;
	std::cout << hourglass[4] << " " << hourglass[5] << " " << hourglass[6] << std::endl;
}