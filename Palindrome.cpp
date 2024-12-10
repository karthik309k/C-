#include<iostream>
using namespace std;

int main() {
	
	int n,rem,num,rev = 0;
	
	cin>>num;
	n = num;
	
	while(num !=0){
		rem = num % 10;
		rev = (rev * 10) + rem;
		num = num / 10;
	}
	cout<<rev <<endl;
	
	if(n == rev) {
		cout<<rev <<" is Palindrome"<<endl;
	}
	else {
		cout<<rev <<" is Not Palindrome"<<endl;
	}
}
