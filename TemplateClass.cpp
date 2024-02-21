#include<iostream>
using namespace std;

template <class T>

class Arith{
public:
  T a;
  T b;


    Arith(T a, T b);
  T add();
  T sub();
  

};
template <class T>
Arith<T> :: Arith(T a, T b){
  this->a = a;
  this ->b = b;
}
template <class T>
T Arith<T> ::  sub() {
  T c ;
  c = a - b;
  return c;
}
template <class T>
T Arith<T> ::  add() {
  T c ;
  c = a + b;
  return c;
}

int main() {
  Arith<int> ar(10,5);
    cout<<ar.sub()<<endl;
    cout<<ar.add()<<endl;
  return 0;
  
}