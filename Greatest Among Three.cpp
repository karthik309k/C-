#include<iostream>
using  namespace std;

int main() {
	
	int a,b,c;
	
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout <<a<<" is Greatest Number"<<endl;
	} 
	else if(b>a && b>c){
		co ut <<b<< " is Gratest Number"<<endl;
	}
	else {
		cout << c<< " is Greatest Number"<<endl;
	}
}
