#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n) {
	for(int i = 1;i<n;i++){
		for(int j = 0; j<n-i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

}
 
void print(int arr[], int n) {
	for(int i = 0; i<n;i++) {
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[5] = {3,4,6,8,2};
	print(arr,5);
	bubbleSort(arr,5);
	print(arr,5); 

	return 0;
}