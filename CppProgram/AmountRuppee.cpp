#include<iostream>
using namespace std;
int main() {
	int amount;
	cout<<"Enter a amount :  "<<endl;
	cin >> amount;

	int rs100,rs50,rs20,rs1,n;
	

	switch(1){
		case 1 : rs100 = amount/100;
			cout<<rs100<<endl;
		             amount -= 100*rs100;
			
		case 2: rs50 = amount/50;
			cout<<rs50<<endl;
			amount -= 50*rs50;
		case 3: rs20 = amount/20;
			cout<<rs20<<endl;
			amount -=20*rs20;
		case 4: rs1 = amount/1;
			cout<<rs1<<endl;
			amount -=1*rs1;
		
			
		}

return 0;
	

}