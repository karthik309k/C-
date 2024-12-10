#include<iostream>
using namespace std;

int main(){
	int n;
	bool is_boolean = true;
	
	cin>>n;
	
	for(int i = 2; i<=n/2; i++){
		if(n % i ==0){
			is_boolean = false;
		}
	}
	if(is_boolean){
		cout<<n<<" is Prime Number"<<endl;
	}
	else {
		cout<<n<<" is Not Prime Numbe"<<endl;
	}
}
