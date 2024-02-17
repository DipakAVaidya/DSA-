#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return 1;
    }
  }
  return 0;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  bool find = linearSearch(arr, 5, 3);

  if (find) {
    cout << "Element is present" << endl;
  } else {
    cout << "Element is absent" << endl;
  }
}