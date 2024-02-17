#include<iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key){
	int start = 0;
	int end = n -1;

	int mid = start+(end - start)/2;
	int ans = -1;

	while(start <= end){
		if(arr[mid] == key){
			ans = mid;
			end = mid - 1;
		}
		else if(key > arr[mid]){
			start = mid + 1;
		}
		else{
			start = mid - 1;
		}
		mid = start+ (end - start)/2;
		
	}
	
	return ans;



}

int main() {

	int size;
	cout<<"Enter A Size "<<endl;
	cin >> size;

	int arr [20];
	cout<<"Enter a Elements in Array: " <<endl;
	for(int i = 0; i < size;i++){
		cin>>arr[i];
	}

	int key;
	cout<<"Enter A Key  "<<endl;;
	cin >> key;

	int firstOccur = firstOccurance(arr,size,key);

	cout<<"First Ocuurance of index 3 is " <<firstOccur<<endl;

	return 0;

}