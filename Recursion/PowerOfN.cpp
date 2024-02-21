#include<iostream>
using namespace std;
// Optimize the power of n
int pow(int m , int  n) {
  if(n == 0){
    return 1;
  }
  else if(n % 2 ==0 ){
    return pow(m*m, n/2);
  }
  else {
    return m * pow (m*m, (n-1)/2);
  }
}

// normal Recursion
int power(int m, int n ){
  if(n == 0)
    return 1;
  return power(m,n-1) * m;
}


// using for loop
int pow1(int m, int n){
  int ans = 1;
  for(int i = 0; i < n; i++){
    ans *= m;;
  }
  return ans;
}


int main() {
  int m, n;
  cout<< "Enter the value of m and n"<< endl;
  cin>> m >> n;

  cout<< "The value of m to the power n is " << pow(m,n)<<endl<<endl;

  cout<<"The value of m^n is "<< power(m,n)<< endl <<endl;

  cout<<"The value of m^n is "<< pow1(m,n)<< endl;
}