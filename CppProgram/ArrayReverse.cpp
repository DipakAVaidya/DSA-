#include <iostream>
using namespace std;
    arrayReverse(int arr[], int size){
		int start = 0;
		int end = size-1;
		for(int i = 0 ; i<=size;i++){
			if(start<=end){
			    swap(arr[start],arr[end]);
				start++;
				end--;
			}
		}
	}

    arrayPrint(int arr[], int n){
	for(int i = 0 ; i <  n; i++){
		cout<<arr[i]<<" " ;
	}
   }

int main() {
	int arr[6] = {1,2,3,4,5,6};
	
	arrayReverse(arr,6);
	arrayPrint(arr,6);
}