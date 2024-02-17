#include <iostream>
using namespace std;

int add(int a, int b) {
  int c = a + b;
  return c;
}

// Call by value
void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}
// Call by Adress
void swap1(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Call by  reference
void swap2(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

// array as parameter
void fun(int *a, int n) {

  a[5] = 10;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl << endl;
}

int *fun1(int n) {
  int *p = new int[n];
  for (int i = 0; i < n; i++)
    p[i] = i + 1;

  return p;
}

int main() {
  int a, b, c;
  a = 9;
  b = 8;
  c = add(a, b);
  cout << "Sum of a and b is: " << c << endl << endl;
  ;

  int x = 20, y = 10;
  swap(x, y);
  cout << x << " " << y << endl << endl;

  swap1(&x, &y);
  cout << x << " " << y << endl << endl;

  swap2(x, y);
  cout << x << " " << y << endl << endl;

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = 6;
  fun(arr, n);

  for (int x : arr) {
    cout << x << " ";
  }
  cout << endl << endl;

  int *ptr, size = 5;
  ptr = fun1(size);

  for (int i = 0; i < n; i++) {
    cout << ptr[i] << " ";
  }
  cout << endl;

  return 0;
}