#include<iostream>
using namespace std;

int sumFormula(int n){
  return (n*(n+1))/2;
}

int sumLoop(int n) {
  int s = 0;

  for(int i  = 1; i <= n; i++) {
    s += i;
  }
  return s;
}

int sumRecursion(int n = 0) {
 
  if(n == 0)
    return 0;
  else 
    return sumRecursion(n-1)+n;
}



int main() {
  int n;
  cout<<"Enter the number : ";
  
  cin>>n;

  cout<<"The sum of "<<n<<" natural numbers is  using Recursion: "<<sumRecursion(n)<<endl<<endl;
  cout<<"The sum of "<<n<<" natural numbers is  using Loop: "<<sumLoop(n)<<endl<<endl;
  cout<<"The sum of "<<n<<" natural numbers is  using Formula: "<<sumFormula(n)<<endl<<endl;
   
}