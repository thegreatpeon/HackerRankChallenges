#pragma once
#include <iostream>

void runDay19();

class AdvancedArithmetic 
{
public:
	AdvancedArithmetic(){}
	virtual ~AdvancedArithmetic(){}

	virtual int divisorSum(int n) = 0;
};

class Calculator19 : public AdvancedArithmetic
{
	int sum = 0;
public:
	Calculator19() {}
	~Calculator19() {}

	int divisorSum(int n);
	

};