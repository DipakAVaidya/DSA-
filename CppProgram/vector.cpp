#include<iostream>
#include<vector>

using namespace std;

int main()  {  

	vector<int> v ;

	vector<int> a(5,2);

	vector<int> last(a);

	cout << "print last + a" <<endl;
	for(int i:last) {  
		cout<<i<<"  " ;
	} cout<<endl;



	cout<<"capacity " << v.capacity()<<endl;

	v.push_back(1);
	cout<<"capacity " << v.capacity()<<endl;

	v.push_back(2);
	cout<<"capacity " << v.capacity()<<endl;

	v.push_back(3);
	cout<<"capacity " << v.capacity()<<endl;

	cout<<"size " <<v.size()<<endl;

	cout<<"Second index " <<v.at(2)<<endl;

	cout<<"First Element " <<v.front()<<endl;
	cout<<"last Element "<<v.back() << endl;

	v.pop_back();

	cout<<"after Poping " <<endl;

	for(int i:v) {  
		cout<<i<<"  " ;
	} cout<<endl;

	cout<<"before clear size " <<v.size() << endl;

	v.clear();

	cout<<"affter clear size "<<v.size() << endl;	


}