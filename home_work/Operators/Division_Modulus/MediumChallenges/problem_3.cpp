/*
Problem #3: Get the 4th Digit From the Right
============================================
● Write a program that reads a positive integer, and prints out the 4th digit
from the right side of that integer. If no such digit exists, print 0

=============================================================================

● Inputs => outputs

○ 15 => 0
○ 125 => 0
○ 1000 => 1
○ 5001 => 5
○ 1234 => 1
○ 654321 => 4
○ 99999 => 9

*/


#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << (num / 1000) % 10 << endl;
	return 0;
}