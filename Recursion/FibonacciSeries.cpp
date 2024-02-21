#include<iostream>
using namespace std;

int fib(int n){
  if(n <= 1)
    return n;
  return fib(n -1) + fib(n - 2);
}

// using Loop 
int fibb(int n ) {
  int a = 0, b = 1, sum;
  for(int i =2; i <= n; i++) {
    sum = a + b;
    a = b;
    b = sum;
    
  }
  return sum;
  
}

int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Fibonacci Series: " << fib(n)<<endl<<endl;
  cout << "Fibonacci Series: " << fibb(n)<<endl;
  
}