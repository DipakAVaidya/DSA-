#include <iostream>

using namespace std;

int main() {
  int A[5];
  int B[] = {2, 4, 6, 8, 10};
  A[0] = 12;
  A[1] = 15;
  A[2] = 10;

  cout << sizeof(A) << endl;
  cout << A[1] << endl;
  printf("%d\n", A[2]);

  cout << endl << sizeof(B) << endl;
  cout << B[1] << endl;
  cout << B[8] << endl;
  printf("%d\n", B[2]);

  for (int i = 0; i < 5; i++) {
    cout << endl << B[i] << endl;
  }
  for (int x : B) {
    cout << x << endl;
  }

  int n;
  cout << "enter a value" << endl;
  cin >> n;
  int C[n];
  C[0] = 12;
  C[1] = 11;
  C[2] = 13;
  for (int x : C) {
    cout << x << endl;
  }
}