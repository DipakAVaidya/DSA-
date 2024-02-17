#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;


	for(int i = 1; i<=n;i++) {
		for(int j  =1; j<=n-i+1;j++){
			cout<<j;
		}
		for(int k = 1;k<=i-1;k++) {
			cout<<"*";		
		}
		for(int k1 = 1;k1<=i-1;k1++) {
			cout<<"*";
				
		}
		for(int j1  =1; j1<=n-i+1;j1++){
			cout<<j;
		}cout<<endl;
	}

}

/* output
1234512345
1234**1234
123****123
12******12
1********1

*/
