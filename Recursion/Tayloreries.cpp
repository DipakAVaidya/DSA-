#include<iostream>
using namespace std;

// normal recuursive function
double e(int x,int n) {
  static double p = 1, f = 1;
  int r;

  if(n == 0) {
    return 1;
  }
  else {
    r = e(x,n-1);
    p = p * x;
    f = f * n;
    return r+p/f;
  }

}

// Optimize recuursive function
double ee(int x, int n){
 static double s = 1;
  if(n == 0) {
    return s;
  }
  s = 1+ (x*s/n);
  return ee(x,n-1);
}

// using Loop
double eee(int x, int n) {
  double s = 1;
  int i;
  double num = 1;
  double den = 1;

  for(i = 1;i <= n; i++){
    num *= x;
    den *= i;
    s += num/den;
  }
  return s;
}

int main() {
  int x, n;
  cout << "Enter the value of x: ";
  cin >> x;
  cout<<"Enter the value of n: ";
  cin >> n;

  cout << "The value of e^x is: " << e(x,n)<<endl<<endl;
  cout << "The value of e^x is: OF " << ee(x,n)<<endl<<endl;
  cout << "The value of e^x is: LOOP " << eee(x,n)<<endl<<endl;
}