#include<iostream>
using namespace std;

int lastOccurance(int arr[],int n, int key) {
	int start = 0;
	int end = n - 1;

	int mid = start+(end - start)/2;

	int ans = -1;
	
	while(start <= end){
		if(arr[mid] == key) {
			ans = mid;
			start = mid + 1;
		}
		else if(key < arr[mid]){
			//for right side
			start = mid + 1;
		} else if(key > arr[mid]) {

			//for left side
			end = mid - 1;
		}
		mid = start+(end - start)/2;
	}
	return ans;	
}

int main() {
  	int size;
	cout<<"Enter a Size : "<<endl;
	cin>>size;

	int arr[20] ;
	cout<<"Enter Elements in Array: "<<endl;

	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}

	int key;
	cout<<"Enter a key : "<<endl;
	cin >>key;

	int lastOccu = lastOccurance(arr,size,key);

	cout<<"Last Ocurrance of  " <<key<< " is: "<<lastOccu<<endl;

	return 0;

	
}
