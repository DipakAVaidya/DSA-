#include<iostream>
using namespace std;

bool isEven(int n){
	if(n & 1){
		return 0;
	}else {
		return 1;
	}
}

int main(){
	int num;
	cout<<"Enter "<<endl;
	cin>>num;
	
	int even = isEven(num);

	if(even){
		cout<<"Even "<<endl;
	} else {
		cout<<"Odd " <<endl;
	}
}