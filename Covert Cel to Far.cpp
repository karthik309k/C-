#include<iostream>
using namespace std;

int main() {
	int Cel, Far, c,f;
	
	cin>>Cel>>Far;
	
	c = Far - 32 * (5/9);
	f = Cel * (9/5) +32;
	
	cout<<"Celcius is : "<<Cel<<endl;
	cout<<"Fahrenheit is: "<<Far<<endl;
}
