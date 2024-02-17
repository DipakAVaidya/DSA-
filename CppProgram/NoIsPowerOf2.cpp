#include<iostream>
using namespace std;

int main() {
	int num ;
	cout<<"Enter A Number: " << endl;
	cin >> num;

	if(num  & (num -1)){
		cout<<"Number is Not Power Of Two: "<<endl;
	}
	else {
		cout<<" Number is power Of Two: " <<endl;
	}

}