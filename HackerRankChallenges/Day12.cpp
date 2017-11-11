#include "Day12.h"
#pragma once

Person::Person()
{
	this->firstName = "Default";
	this->lastName = "";
	this->id = 0;
}

Person::Person(std::string firstName, std::string lastName, int identification)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = identification;
}

void Person::printPerson() 
{
	std::cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
}

Student::Student(std::string firstName, std::string lastName, int identification, std::vector<int> scores) :
	Person(firstName, lastName, identification), testScores(scores)
{
	/*
	*   Class Constructor
	*
	*   Parameters:
	*   firstName - A string denoting the Person's first name.
	*   lastName - A string denoting the Person's last name.
	*   id - An integer denoting the Person's ID number.
	*   scores - An array of integers denoting the Person's test scores.
	*/
	// Write your constructor here
	//Person(firstName, lastName, identification);
	//this->firstName = firstName;
	//this->lastName = lastName;
	//this->id = identification;
	//this->testScores = scores;
}

char Student::calculate()
{
	/*
	*   Function Name: calculate
	*   Return: A character denoting the grade.
	*/
	// Write your function here
	int averageGrade = 0;

	for (int i = 0; i < testScores.size(); i++)
	{
		averageGrade = averageGrade + testScores[i];
	}
	averageGrade = averageGrade / testScores.size();

	if (averageGrade >= 90)
	{
		return 'O';
	}
	else if (averageGrade >= 80)
	{
		return 'E';
	}
	else if (averageGrade >= 70)
	{
		return 'A';
	}
	else if (averageGrade >= 55)
	{
		return 'P';
	}
	else if (averageGrade >= 40)
	{
		return 'D';
	}
	else
	{
		return 'T';
	}
}

void runDay12()
{
	std::string firstName;
	std::string lastName;
	int id;
	int numScores;
	std::cin >> firstName >> lastName >> id >> numScores;
	std::vector<int> scores;
	for (int i = 0; i < numScores; i++) {
		int tmpScore;
		std::cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	std::cout << "Grade: " << s->calculate() << "\n";
}