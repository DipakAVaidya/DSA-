#include<iostream>
using namespace std;

int fibo(int n){
	int a =0 ,b=1,temp;

	if(n == 1){
		return 1;
	}

	for(int i =0; i <n; i++) {
		temp = a+b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int n;
	cout<<"enter   "<<endl;
	cin>> n;

	int fibona = fibo(n);
	cout<<"Nth Tearm in fibo is " << fibona<<endl;

}