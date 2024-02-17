#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n){
	int min = INT_MAX;


	//int min = num[0];
	for(int i = 0;i<n;i++) {
		if(num[i] < min) {
		min = num[i];
		}

	} 

	return min;
}

int getMax(int num[], int n){
	int max = INT_MIN;
	//int max = num[0];
	for(int i =0; i<n; i++) {
		if(num[i] > max) {
		max = num[i];
		}
	}
	return max;
}

int main() {

	int size;
	cout<<"enter array size: " <<endl;
	cin>>size;

	int arr[50];
	cout<<"arrays  value based on size " << endl;
	for(int i = 0; i < size; i++) {
		cin >>arr[i];
	} 

	int max = getMax(arr,size);
	int min = getMin(arr,size);

	cout<<" min number in array: "<<min << endl;
	
	cout<<" max number in array: "<<max << endl;

}