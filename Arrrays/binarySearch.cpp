#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};

  int key = 7;

  int index = binarySearch(arr, 6, key);
  cout << "Key preset at index: " << index << endl;
}
