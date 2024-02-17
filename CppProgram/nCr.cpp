#include<iostream>
using namespace std;

int fact(int n) {
	int ans = 1;

	for(int i = 1; i<=n;i++){
		ans = ans * i;
	}
	return ans;
}

int nCr(int n, int r){
	int numer = fact(n);
	int deno = fact(r) * fact(n-r);

	return numer / deno ;

}

int main() {

	int n,r;
	cout<<"Enter number "<<endl;
	cin>>n>>r;

	int ncr = nCr(n,r);
	
	cout<<ncr;

}