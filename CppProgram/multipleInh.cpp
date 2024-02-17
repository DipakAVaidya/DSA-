#include<iostream>
using namespace std;

class A{
	protected:
	int a;
	public:
	void get_a(int n){
		a =n;
	}
};

class B {
	protected:
	int b;
	public:
	void get_b(int n){
		b = n;
	}
};

class C : public A, public B{
	public :
	void display(){
		cout<<"The value of a: " <<a << endl;
		cout<<  " The value of b: " <<b<<endl;
		cout<<"Adition of a and b: " << a + b;
	}

};

int main() { 
	C c;

	c.get_a(9);
	c.get_b(7);
	
	c.display();

	return 0;

}