#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;

	for(int i = 1;i<=n;i++){
		for(int j =1; j<= n-i+1; j++){
			cout<< " ";
		}	
		for(int k =1;k<=i;k++){
			cout<<i;
		}
		cout<<endl;
	}

}
/* output
    1
   22
  333
 4444


*/