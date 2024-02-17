#include<iostream>
using namespace std;

int AP(int n){
	return 3*n+7;
}

int main(){
	int num;
	cout<<"enter "<<endl;
	cin >> num;

	int ap = AP(num);
	cout<<ap<<endl;
	
}