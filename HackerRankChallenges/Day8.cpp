#include "Day8.h"

void runDay8()
{
	//retrieve and store input
	int entries = 0, number = 0;
	std::string name;
	std::vector<std::string> output;
	std::map<std::string, int> phoneBook;
	std::cin >> entries;

	for (int i = 0; i < entries; i++)
	{
		std::cin >> name;
		std::cin >> number;
		phoneBook.insert(std::pair<std::string, int>(name, number));
	}

	//print output
	std::cin.ignore();
	std::getline(std::cin, name);
	while (!name.empty())
	{
		output.push_back(name);

		std::getline(std::cin, name);
	}

	for (int i = 0; i < output.size(); i++)
	{
		printContact(output.at(i), phoneBook);
	}
}

void printContact(std::string name, std::map<std::string, int> &phoneBook)
{
	if (phoneBook.count(name))
	{
		std::cout << name << "=" << phoneBook.find(name)->second << std::endl;
	}
	else
	{
		std::cout << "Not found" << std::endl;
	}
}