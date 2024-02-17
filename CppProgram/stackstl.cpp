#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<string> s;

	s.push("love ");
	s.push("hat " );
	s.push("dekhna padega ");

	cout<<"Top element  ->> " << s.top() << endl;

	s.pop();
	cout<<"Top Element ->> " << s.top() << endl;

	cout<<"Size of stack " << s.size() << endl;

	cout<<"Empty the stack " << s.empty()<<endl;
	
}