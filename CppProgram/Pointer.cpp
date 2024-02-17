#include <iostream> 
using namespace std;

int getSum(int *arr ,int n) {
	cout<<endl<< "Size : " << sizeof(arr) << endl;
	int sum = 0;
	for (int i = 0 ; i < n; i++) {
		sum = sum + arr[i];
	}
	return sum;
}

void update (int ** p1) {
 	//p = p + 1;
	 //KUch change nai hoga

	//*p1 = *p1 + 1;
	// han change hoga value of p;

	**p1 = **p1 + 1;
	
}
int main () {
 	int arr[6] = {4,5,7,8,41,5};
	cout << "sum is " << getSum(arr , 6) << endl<< endl<< endl;
	int i = 5; 
	int *p = &i;
	int **p1 = &p;


	cout<< endl << "Sab sai hai" << endl<<endl;

	cout << p << endl;
	cout << *p1 << endl<< endl;

	cout<< i<<endl;
	cout << *p << endl;
	cout << **p1 <<endl<< endl;

	cout << i << endl;
	cout << p << endl;
	cout << p1 << endl<< endl;

	update(p1);
	cout << i << endl;
	cout << p << endl;
	cout << p1 << endl<< endl;

	

	cout <<&p<<endl;
	cout <<p1<<endl;
	

}