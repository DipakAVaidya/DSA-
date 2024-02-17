#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i<n;i++){
	if(n % 2 == 0){
		return 0;
	}
	return 1;

	}
}

int main() {

	int num;
	cout<<"Enterr a number : "<<endl;
	cin>>num;

	int prime  = isPrime(num);
	
	if(prime){
		cout<<"Prime "<<endl;
	}else {
		cout<<"Not Prime "<<endl;
	}



}