#include<iostream>
using namespace std;

     arrayAlternate(int arr[], int size){
	int temp = 0;
	for(int i = 0 ; i<size;i+=2){
		if(i+1 < size){
		//swap(arr[i],arr[i+1]);
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
		}
		
		
	}
     }

    arrayPrint(int arr[], int n){
	for(int i=0; i < n; i++){
		cout<<arr[i]<< " ";
	}
   }

int main() {
	int arr[5]  =  {1,2,3,4,5};
	arrayAlternate(arr, 5);   
	arrayPrint(arr,5);        
	
  }