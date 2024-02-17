#include <iostream>
using namespace std;

int main() {

  int arr[5];
  arr[0] = 1;
  arr[1] = 2;
  arr[3] = 3;
  cout << sizeof(arr) << endl;

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int a[] = {1, 58, 4, 7, 6, 0};
  cout << sizeof(a) << endl;
  cout << sizeof(a) / sizeof(int) << endl;
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl << endl;

  int size;
  cout << "Enter a size of array" << endl;
  cin >> size;

  int A[10];
  cout << "Enterr Elements in  Array " << endl;
  for (int i = 0; i < size; i++) {
    cin >> A[i];
  }
  for (int x : A) {
    cout << x << " ";
  }
}