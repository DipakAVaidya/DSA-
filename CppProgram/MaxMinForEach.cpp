#include<iostream>
#include<limits.h>
using namespace std;

int main( ){
 	int arr[10] = { 1,7, 3,6,14,12,2,7,6,9};

	int max = INT_MIN;

	/* 
	for(int i = 0; i < 10; i++){
		if(arr[i] > max){
			max = arr[i];
			
		}
	} 
	*/

 	// Using For Each Loop
	for(auto x : arr){
		if(x > max){
			max = x;
		}
	}
	cout<<"Maximum number in Array : "<< max << endl;

	int min = INT_MAX;
	
	/*
	for(int i = 0; i < 10; i++) {
		if(arr[i] < min){
			min = arr[i];
		}
	}
	*/
	
	// using for each loop
	for(auto x: arr){
		if(x < min){
			min = x;
		}
	}
	cout<< " Minimum number in Array : " << min;

  	return 0;
}