#include<iostream>
using namespace std;

bool binarySearch(int  arr[], int size, int key){
	int start = 0;
	int end = size-1;
	int mid = start+(end - start)/2;

	while(start <= end){

		if(arr[mid] == key){
			return true;
		}
		
		if(key > arr[mid]) {
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
		mid = start+ (end - start)/2;	
	}
	return false;
}

int main() {
	int size ;
	cout<<"Enter a Size of a Array "<<endl;
	cin>>size;

	int arr[50];
	cout<<"Enter A Element in Array : " << endl;
	for(int i =0;i<size;i++){
		cin>>arr[i];
	}

	int key ;
	cout <<" Enter A key you Want to Search : " <<endl;

	cin>>key;

	int found = binarySearch(arr,size,key);
	if(found){
		cout<<"Key is Present in Array: " <<endl;
	}else {
		cout<<" key is Not present is Array : "<<endl;

	}
	
}