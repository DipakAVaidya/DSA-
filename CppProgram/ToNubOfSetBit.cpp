#include<iostream>
using namespace std;

int no_setBit(int n){
	int b,s=0;
	
	while(n != 0){
		b = n & 1;

		s = s + b;
		n >>= 1;
	}
	return s;
}

int to_setBit(int a , int b) {
	int ans = 0;
	ans = no_setBit(a)+no_setBit(b);
	return ans;
}

int main() {
	int  num1 , num2;

	cout<<"Enter a num1 and num2 : " <<endl;

	cin>>num1>>num2;

	int ans = to_setBit(num1,num2);

	cout<<ans;
}