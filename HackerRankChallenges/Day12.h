#pragma once
#include <iostream>
#include <vector>
#include <string>

void runDay12();

class Person
{
protected:
	std::string firstName;
	std::string lastName;
	int id;

public:
	Person();
	Person(std::string firstName, std::string lastName, int identification);
	void printPerson();
};

class Student : public Person
{
private:
	std::vector<int> testScores;
public:
	Student(std::string firstName, std::string lastName, int identification, std::vector<int> scores);
	char calculate();
};