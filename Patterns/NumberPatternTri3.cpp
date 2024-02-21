#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;

	int cnt = 1;

	for(int i = 1; i<=n;i++) {
		for(int j  =1; j<=i-1;j++){
			cout<<" ";
		}
		for(int k = 1;k<=n-i+1;k++) {
			cout<<cnt;
			cnt++;	
		}cout<<endl;
	}

}

/* output

123
 45
  6


*/