#include<iostream>
using namespace std;

int main(){
 	int num;
	cout<<"Enter A Number " <<endl;
	cin >> num;

	int count = 0;

	while( num != 0) {
		count ++;
		num &= num - 1;
	}

	cout<<"Set bit in numberr is " <<count<<endl;

}