#include<iostream>
using namespace std;

int power(){
	int a , b;
	cout<<"Enter a numbers : "<<endl;
	cin>>a >>b;

	int ans = 1;
	for(int i = 1; i<=b;i++){
		ans = ans * a;
	}
	return ans;
}
int main() {

	cout<<"Power of A and  B is "<<power()<<endl;;
	cout<<"Power of A and  B is "<<power()<<endl;
	cout<<"Power of A and  B is "<<power()<<endl;
	cout<<"Power of A and  B is "<<power()<<endl;

	return 0;
}