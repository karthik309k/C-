#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int original,remainder, result=0, n=0, num;
	
	cout << "Enter an integer value: ";
	cin >> num;
	
	original = num;
	while (original != 0) {
		original /= 10;
		++n;
	}
	original = num;
	
	while (original != 0) {
		remainder = original % 10;
		result += pow(remainder, n);
		original /= 10;
	}
	
	if (result == num) {
		cout << num << " is an Armstrong number" << endl;
	}
	else {
		cout << num << " is not an Armstrong number" << endl;
	}
	return 0;
}