#include<iostream>
using namespace std;

int main() {
	int temp , digit , num, rev = 0;

	cout<<"Enter A number to check its palimdrom or not "<<endl;
	cin >>num;
	temp = num;
	
	do{	
		digit = num % 10;
		rev =(rev * 10) + digit;
		num = num / 10;

	}while(num != 0);

	cout<<"Reverse of Number Is " << rev << endl;
	
	if(temp == rev){
		cout<<"its a palimdrom no : "<<endl;
	}
	else {
		cout<<"not a palimdrom no: "<<endl;
	} 

}