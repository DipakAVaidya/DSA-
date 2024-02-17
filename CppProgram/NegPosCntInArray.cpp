#include<iostream>
using namespace std;

int main() {
	int size;
	cout<<"Enter a size of Array: " << endl;
	cin>>size;

	int arr [50];
	cout<<"Enter a element in array : " <<endl;
	for(int i = 0; i<size;i++){
		cin>>arr[i];
	}

	int ncount =0;
	int pcount =0;

	for(int i = 0; i < size; i++){
		if(arr[i] > 0){
			
			pcount++;
		}

		if(arr[i] < 0){
			
			ncount++;
		}
	} 

	cout<<"Positive numbers in Array : "<<pcount<<endl;
	cout<<"Negetive number is Array: " << ncount<<endl;

}