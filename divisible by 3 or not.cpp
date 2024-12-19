#include <iostream>
using namespace std;

int main() {
	int num;
	
	cin >> num;
	if (num % 3 == 0) 
		cout << num << " is divisible by 3";
	
	else 
		cout << num << " is not divisible by 3";	
	
	return 0;
}