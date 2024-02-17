#include<iostream>
#include<limits.h>
using namespace std;


int getMax(int arr[], int n){
  int max = INT_MIN;
  for(int i = 0; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int getMin(int arr[], int n) {
  int min = INT_MAX;
  for(int i = 0; i < n; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

void arrayP(int arr[],int n) {
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<< " ";
  }cout<<endl;
}

int main() {
  int arr[6] = {1,2,3,4,5,6};
  arrayP(arr,6);
  cout<<getMin(arr,6)<<endl;
  cout<<getMax(arr,6)<<endl;
  arrayP(arr,6);

  
}