#include<iostream>
using namespace std;

int Swap(int num){
	return (  (num  &  0xAAAAAAAA ) >> 1 ) | ( ( num & 0x55555555 ) << 1); 
} 
int main() {

     	int num;
	cout<<"Enter a Num "<<endl;
	cin >> num;
	
	int ans = Swap(num);

	cout<<ans;
	 
}