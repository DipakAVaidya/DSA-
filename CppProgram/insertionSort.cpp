#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

	for(int i =1; i <n;i++) {
		int temp = arr[i];
		int j = i -1;
		for(; j>=0; j--) {
			if(arr[j] > temp){
			arr[j+1] = arr[j];
			}else{
			break;
		}
		}
		
		arr[j+1] = temp;
	}

	
}

void print(int arr[], int n) {
	for(int i =0; i <n; i++) {
		cout<<arr[i]<<" ";
	}cout<<endl;

}

int main (){
	int arr[6] = {3,4,6,1,5,8};

	print(arr,6);
	insertionSort(arr,6);
	print(arr,6);

}









