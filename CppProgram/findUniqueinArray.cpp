#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
 	int ans =0;
	for(int i = 0; i<size;i++){
		ans = ans^arr[i];
	}
	return ans;

}

int main() {
	int size;
	cout<<"enter a size";
	cin>>size;./a
	
	int arr[20];
	cout<<"Enter Elements in array "<<endl;

	for(int i = 0; i<size;i++){
		cin>>arr[i];
	}

	cout<<"Unique Elements in Array is : "<<findUnique(arr,size)<<endl;

	

}