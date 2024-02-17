#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> s;
	
	s.push(12);
	s.push(11);
	s.push(12);

	//cout<<s<<endl;

	cout<< s.top <<endl;

	return 0;
}
