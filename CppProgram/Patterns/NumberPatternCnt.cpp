#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;
	
	int count =1;
	for(int i =1; i<=n; i++){
		for(int j=1;j<=n;j++){
			cout<<count << "  " ;
			count++;
		}
		cout<<endl;
	}
}
/* 
1 2 3 
4 5 6
7 8 9
*/