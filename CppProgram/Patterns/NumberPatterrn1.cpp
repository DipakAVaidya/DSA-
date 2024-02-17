#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A size ";
	cin>>n;

	for(int i = 1; i<= n;i++){
		for(int j = 1; j<=n;j++){
			cout<<j;
		}
		cout<<endl;
	}

}

/* Output
1 2  3 
1 2  3
1 2 3
*/