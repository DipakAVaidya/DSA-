#include<iostream>
using namespace std;

int main( ){
	
	int arr[10],  size, key,  i;

	cout<<"Enter a Size of an Array : "<<endl;
	cin>>size;	

	// take Array Element  from user
	cout << " Enter A array element " <<endl;
	for(i =0; i < size; i++){
		cin>>arr[i];
	}

	//Searchig Throw Array
	cout << " Enter a Value You Want To Search:  "<<endl;
	cin >> key;

	for(i = 0; i<size;i++){
		if(arr[i] == key){
		cout<<" Value Present At Index " << i<<endl;
		return 0;
		}	
	}cout<<"Value is  not Present "<<endl;
}