#include<iostream>
using namespace std;

int main() {
	int row;
	cout<< "Enter Row Size " << endl;
	cin >> row;

	int col;
	cout<< "Enter Column Size " << endl;
	cin >> col;

	// creating 2D array

	int** arr = new int*[row];
	
	for(int i = 0; i < row; i++) {
		arr[i] = new int [col];
	}

	// inserting values
	for(int i = 0; i< row; i++) {
		for(int j =0; j < col; j++) {
			cin>>arr[i][j];
		}
	}

	for(int i = 0; i< row; i++) {
		for(int j =0; j < col; j++) {
			cout<< arr[i][j] << "  ";
		}cout<<endl;
	}

	// relesing spacce
	for(int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete [] arr;
	 

}