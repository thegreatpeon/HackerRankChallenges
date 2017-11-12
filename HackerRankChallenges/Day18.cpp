#pragma once
#include "Day18.h"

void runDay18()
{
	std::string s;
	getline(std::cin, s);

	// create the Solution class object p.
	Solution18 obj;

	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}

	bool isPalindrome = true;

	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++) {
		if (obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;

			break;
		}
	}

	// finally print whether string s is palindrome or not.
	if (isPalindrome) {
		std::cout << "The word, " << s << ", is a palindrome.";
	}
	else {
		std::cout << "The word, " << s << ", is not a palindrome.";
	}
}

void Solution18::pushCharacter(char ch)
{
	palinStack.push(ch);
}

char Solution18::popCharacter()
{
	char temp = palinStack.top();
	
	palinStack.pop();

	return temp;
}

void Solution18::enqueueCharacter(char  ch)
{
	palinQueue.push(ch);
}

char Solution18::dequeueCharacter()
{
	char temp = palinQueue.front();

	palinQueue.pop();

	return temp;
}