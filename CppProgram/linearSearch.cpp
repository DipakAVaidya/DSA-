#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
	for(int i =0; i< size;i++){
		if(arr[i] == key){
		  return 1;	
		}
	}
	return 0;
}

int main() { 
	int arr[5] = {2,3,5,6,8};
	
	int key;
	cout<<"Enter key you want to search " <<endl;
	cin>>key;

	bool found = search(arr,5,key) ;
	
	if(found){
	cout<<"key is present "<<found<<endl;
	}
	else {
	cout<<"Key is not present : " <<endl;
	}

}