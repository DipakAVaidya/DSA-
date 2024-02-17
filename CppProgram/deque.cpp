#include<iostream>
#include<deque>

using namespace std;

int main( ) {

	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);


	cout << endl;
	
	cout<<" First index Element " << d.at(1) <<endl;

	cout << "First " <<d.front() <<endl;
	cout << "Last " << d.back()<<endl;

	cout<<"Empty or Not "<< d.empty()<<endl; 

	d.erase(d.begin(),d.begin()+1);

	for(int i  : d){
		cout<<i<< " ";
	}
	cout << endl;

	/* for(int i  : d){
		cout<<i<< " ";
	}
	cout << endl;
	
	d.pop_front();

	for(int i  : d){
		cout<<i<< " ";
	}
	cout << endl;  */
}