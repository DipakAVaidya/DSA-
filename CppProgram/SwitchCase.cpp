#include<iostream>
using  namespace std;

int main(){
	
	int a, b;

	cout<<"enter the value of a "<<endl;
	cin>>a;
	cout<<"enter the value of b "<<endl;
	cin>>b;

	char op;
	cout<<"Enter the operation you want perform "<<endl;
	cin>>op;
	
	switch( op ){
	
	case '+' : cout<<"addition of a and  b is: "<<a+b<<endl;
		break;
	case '-' : cout<<"subtraction of a and  b is: "<<a-b<<endl;
		break;
	case '*' : cout<<"multiplication of a and  b is: "<<a*b<<endl;
		break;
	case '/' : cout<<"division of a and  b is: "<<a/b<<endl;
		break;
	case '%': cout<<"modulo of a and  b is: "<<a%b<<endl;
		break;
	default :
		cout<<"wrong input: "<<endl;
	
	}


}