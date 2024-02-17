#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter A number "<<endl;
	cin>>n;
	char ch = 'A';
	for(int i=1;i<=n;i++){
		for(int j =1;j<=n;j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
}
/*OutPut

ABC
DEF
GHI

*/