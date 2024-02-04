/*
Problem #3: Our Remainder
=========================

● We know that N % M computes the remainder of dividing N by M
● Write a program that reads in 2 positive integers, and print out the remainder
without using the modulus operator %

================================================================================

● Input: 27 12
● Output: 3

================================================================================

○ Remember, in mathematics: 27 % 12 = 3
*/


#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	//in mathematics: 27 % 12 = 3
	cout << (a % b) << endl;
	//other way
	cout << n - (n / b) * b << endl;
	return 0;
}