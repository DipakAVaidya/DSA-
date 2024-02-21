#include<iostream>
using namespace std;

int factorialRec(int n){
  if(n == 0)
    return 1;
  return factorialRec(n-1)*n;
}

int factorialLoop(int n) {
  int f = 1;
  for(int i = 1; i<=n; i++){
    f *= i;
  }
  return f;
}

int main() {
  int n;
  cout<<"Enter the number : ";
  cin >>n;

  cout<<"The recursive factorial  of "<<n<<" is "<<factorialRec(n)<<endl<<endl;
  cout<<"The loop factorial  of "<<n<<" is "<<factorialLoop(n)<<endl;
}