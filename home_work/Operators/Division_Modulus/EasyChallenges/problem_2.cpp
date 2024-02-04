/*
Problem #2: Fractional Part
===========================
● Write a program that reads in 2 real numbers, a and b, and then divides
them (a/b), but prints out only the fraction part

================================================================================

● Input: 201 25
● Output: 0.04

================================================================================

○ Notice: 201 / 25 = 8.04
○ We only want the fraction part: 0.04
*/


#include<iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	double result = a / b;
	cout << result - (int)result << endl;

/*
	another solution
	201 % 25 = 1
	Then 1 / 25 is the fractional part = 0.4
*/ 
    double rem = (int)a % (int)b;
	cout << rem / b << endl;
	return 0;
}