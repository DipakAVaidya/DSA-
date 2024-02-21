#include<iostream>
using namespace std;

// tail Recursion Problem
void fun(int n){
  if(n>0){
    cout<<n<<endl;;
     fun(n-1);
  }
}

// head Recursion Problem
void fun1(int  n){
  if(n>0){
    fun1(n-1);
    cout<<n<<endl;
  }
}

int  fun2(int n){ 
  static int a = 0;
  if(n>0){
    a++;
    return fun2(n-1) + a;
    
  }
  return 0;
}

int func(int n)
{
  if(n>0){
    return func(n-1) + n;
  }
  return 0;
}

// Tree Recursion Problem
void fun3(int n) {
  if(n > 0) {
    cout<<n <<endl;
    fun3(n-1);
    fun3(n-1);
  }
}


// indirect Recursion Problem
void B(int n);

void A(int n){
  if(n >0){
    cout<<n<<endl;
    B(n-1);
  }
}
void B(int n){
  if(n > 1){
    cout<<n<<endl;
    A(n/2);
  }
}

// nested Recursion Problem
int fun4(int n) {
  if(n > 100){
    return n - 10;
  }
  else {
    return fun4(fun4(n+11));
  }
}
int main() {
  int n  = 3;
  cout<<"This is tail Recursion Problem "<<endl;
  fun(n);
  cout<<endl;
  cout<<"This is head Recursion Problem "<<endl;
  fun1(n);
  cout<<endl;
  
  cout<<fun2(n)<<endl<<endl;
  cout<<func(n)<<endl<<endl;
  cout<<"This is Tree Recursion Problem "<< endl;
   fun3(n);
  cout<<endl;

  int n1 = 20;
  cout<<"This is indirect Recursion Problem "<<endl;
  A(n1);
  B(n1);

  cout<<endl;
  cout<<"This is nested Recursion Problem "<<fun4(95)<<endl;
  return 0;
 
}