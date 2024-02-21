#include<iostream>
using namespace std;

int fact(int n){
  if(n == 0)
    return 1;
  return fact(n - 1) * n;
}

int nCr(int n, int r) {
  int  t = fact(n);
  int t1 = fact(r);
  int t2 = fact(n - r);

  return t / (t1 * t2);
}

// recursive function to calculate nCr
int nCr_R(int n, int r) {
  if(r == 0 || n == r)
    return 1;
  return nCr_R(n - 1, r -1) + nCr_R(n - 1, r);
}

int main() {
  int n, r;
  cout << "Enter the value of n: " <<endl;
  cin >> n;
  cout<<"Enter the value of r: "<<endl;
  cin >> r;

  cout<< "nCr: " << nCr(n, r)<<endl<<endl;
  cout<< "nCr: " << nCr_R(n, r)<<endl;
  
}