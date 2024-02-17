#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	v.push_back(7);
	v.push_back(6);

	cout<<"Finding index in list " << binary_search(v.begin(),v.end(),6)<<endl;

	cout<<"before Rotate " <<endl;
	for(int i:v){
		cout<< i <<" ";
	}cout<<endl;

	cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6) -v.begin()<<endl;
	cout<<"Upper bound -> " <<upper_bound(v.begin(),v.end() , 4)-v.begin()<<endl;

	int a = 3;
	int b = 5;

	cout<<"max ->  " <<max(a,b);

	cout<<"min -> " <<min(a,b);

	swap(a,b);

	cout<<endl<<"a ->> " <<a <<endl;
	
	string ab = "abcd";
	reverse(ab.begin(),ab.end());
	cout<<"String " << ab<<endl;

	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after roated " <<endl;
	for(int i:v){
		cout<< i <<" ";
	}

}
