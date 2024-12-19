#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	
	cout << "Enter the two values: ";
	cin >> num1 >> num2;
	
	if (num1 == num2) {
		cout << "Two numbers are equal";
	}
	else {
		cout << "Two numbers are not equal";
	}
	return 0;
}