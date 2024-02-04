/*
Problem #2: Print Me

● Write a program that reads 2 integers A, B
○ B is either -1 or 1

■ If -1, print 2*A+1
■ If 1, print A*A

● Hint
○ You need to think in a simple 1 line formula for the output
*/
#include<iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int e1 = A * A;
	int e2 = 2 * A + 1;

	int case1 = (B + 1) / 2;
	int case2 = 1 - case1;

	cout << case1 * e1 + case2 * e2 << endl;
	
}