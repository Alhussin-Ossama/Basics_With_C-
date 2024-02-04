#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	cout << (num % 2 == 0) * 100 + (num % 2 !=0)*7 << endl;
	return 0;
}