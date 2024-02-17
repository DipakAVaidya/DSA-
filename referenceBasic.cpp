#include<iostream>
using namespace std;

int main() {
  int a = 10;
  // int &b only declerration is not valid,reference variabl need to initilize
  int &b = a;

  int c = 30;
  b = c;
  
  cout<<a<<endl;
  cout<<b<<endl;
  
}