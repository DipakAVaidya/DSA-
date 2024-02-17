#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
  char x;
};

void fun (struct Rectangle r) {
  r.length = 0;
  r.breadth = 8;
  cout<<"Lenght " <<r.length<<endl<<"Breath "<<r.breadth<<endl;
}

void fun1 (struct Rectangle *r){
  r -> length = 9;
  r -> breadth = 10;
  cout<<"Lenght " <<r->length<<endl<<"Breath "<<r->breadth<<endl;
}

struct Rectan


// struct Rectangle r1 = {10, 5}; // we can declarre herre also
int main() {
  struct Rectangle r1 = {10, 5};

  r1.length = 15;
  r1.breadth = 20;

  cout << r1.length << endl;
  cout << r1.breadth << endl;

  fun(r1);

  cout<<sizeof(r1)<<endl;

  fun1(&r1);

  
}