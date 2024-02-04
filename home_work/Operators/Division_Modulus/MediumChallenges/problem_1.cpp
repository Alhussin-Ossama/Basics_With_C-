/*
Problem #1: Is it Even?
=======================

● Write a program that reads a positive integer and test if it is boolean or note
● Find at least 3 different ways for this task:

==================================================================================

○ Using only %2
○ Using only /2
○ Using only %10

*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << (num % 2 == 0) << endl;
	cout << (((double)num / 2 - num / 2) == 0) << endl;
	cout << (num % 10 == 0 || num % 10 == 2 || num % 10 == 4 || num % 10 == 6 || num % 10 == 8) << endl;

	return 0;
}