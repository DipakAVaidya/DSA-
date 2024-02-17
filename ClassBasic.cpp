
#include <iostream>
using namespace std;


class Rect{
  int len;
  int bre;

  public: 
  Rect(int l, int b){
      len = l;
      bre = b;
  }

  int area(int l , int b){
      return l * b;
  }

  int per(int l , int b) {
      return 2*(l+b);
  }

};

int main()
{
  int l , b;  
    Rect r(0,0) ;
    cout<<"Enter length and Breadth: "<<endl;
    cin>>l>>b;

    int area = r.area(l,b);
    cout<<"Area of Rectangle is:"<<area<<endl;
    int pre = r.per(l,b);
    cout<<"Area of REctangle is: "<<pre<<endl;

    return 0;
}