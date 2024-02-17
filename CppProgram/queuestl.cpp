#include<iostream>
#include<queue>

using namespace std;

int main() {
	queue<string> q ;


	q.push("Dipak ");
	q.push("ovei");
	q.push("koi ");

	cout<<"Size after Pop " << q.size() << endl;
	
	cout<<"first element is : " <<q.front() << endl;
	q.pop();
	cout<<"first element is : " <<q.front() << endl;

	cout<<"Size after Pop " << q.size() << endl;
	
	
	
}