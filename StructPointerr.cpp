#include <iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int main() {

  struct Rectangle r = {10, 5};

  cout << r.length << endl;
  cout << r.breadth << endl;

  Rectangle *p = &r;

  cout << p->length << endl;
  cout << p->breadth << endl;

  Rectangle *q;
  q = new Rectangle;

  q->length = 15;
  q->breadth = 7;

  cout << q->length << endl;
  cout << q->breadth << endl;

  return 0;
}