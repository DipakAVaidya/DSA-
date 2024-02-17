#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;
	
	for(int i = 1; i<=n;i++) {
		//int cnt = 1;
		for(int j =1; j <= i ;j++) {
			cout<<i+j-1;
			//cout<<cnt
			//cnt= cnt +1 ;
		} 
		cout<<endl;
	}

}

/* 

1
23
456
6789

*/