#include<iostream>
#include<map>

using namespace std;

int main() {
	map<int,string> a;
	a[1] = "Babbar ";
	a[2] = "True ";
	a[3] = " love ";

	a.insert({5,"bheem"});
	a.insert({12,"eem"});
	
	cout<<"before Erase "<<endl;

	for(auto i :a){
		cout<<i.first <<" " <<i.second<<" ";
	}cout  <<endl;

	cout<<"finding 13 " <<a.count(4)<<endl;
	
	a.erase(3);

	cout<<"after erase " <<endl;
	for(auto i :a){
		cout<<i.first <<" " <<i.second<<" ";
	}cout  <<endl;

	auto it = a.find(12);

	for(auto i=it; i!=a.end();i++) {
		cout<<(*i).first<<endl;
	}

	

	
}