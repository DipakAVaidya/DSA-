#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
  char x;
};

int main() {
  int a = 10;
  int *b = &a;

  cout << b << endl;
  cout << &b << endl;
  cout << &a << endl;
  cout << *b << endl;
  cout << a << endl << endl;
  ;
  // cout<<*a<<endl; not valid

  int arr[] = {1, 2, 3, 4, 5};

  int *p = arr;

  for (int i = 0; i < 5; i++) {
    cout << p[i] << " ";
    cout << &p[i] << " ";
  }
  cout << endl << endl;

  int *q;
  q = new int[5];
  q[0] = 10, q[1] = 20, q[2] = 30, q[3] = 40;
  for (int i = 0; i < 5; i++) {
    cout << q[i] << " ";
    // cout<<&p[i]<<" ";
  }
  cout << endl << endl;
  ;

  int *a1;
  char *a2;
  float *a3;
  double a4;
  struct Rectangle *a5;

  cout << sizeof(a1) << endl;
  cout << sizeof(a2) << endl;
  cout << sizeof(a3) << endl;
  cout << sizeof(a4) << endl;
  cout << sizeof(a5) << endl;

  delete[] q;
  return 0;
}