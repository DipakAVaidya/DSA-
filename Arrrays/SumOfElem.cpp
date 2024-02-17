#include <iostream>
using namespace std;

int elementSum(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};
  printArray(arr, 6);
  cout << "Sum of All elements in a array is " << elementSum(arr, 6) << endl;
}