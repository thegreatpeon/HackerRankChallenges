#pragma once
#include <iostream>
#include <string>
#include <queue>
#include <stack>


class Solution 
{
protected:
	std::queue<char> palinQueue;
	std::stack<char> palinStack;
	
public:
	//Write your code here
	void pushCharacter(char ch);
	void enqueueCharacter(char  ch);
	char popCharacter();
	char dequeueCharacter();

};

void runDay18();
