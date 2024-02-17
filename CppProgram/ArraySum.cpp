#include<iostream>
using namespace std;

int Sum(int arr[], int n)
{	int sum = 0;
	for(int i = 0; i < n;i++){
		sum += arr[i]; 
	}	
	return sum;
}

int main() {

	//using function and user input
	int size;
	cout<<"Enter Size Of an Array: " <<endl;
	cin >> size;

	int arr[100] ;
	for(int i =0; i < size; i++){
		cin>>arr[i];
	}
	
	int Ans = Sum(arr,size);

	cout<<"sum of Array:  " <<Ans << endl;
	
	/*
	//  without functon and input;
	int arr[7] = {2,6,4,8,12,14,16};

	int sum= 0,  n = 7;
	
	for(int i = 0;i<n;i++){
		sum += arr[i];
	}
	cout<<"Sum of all element in Array:  " <<sum <<endl;

	*/
}