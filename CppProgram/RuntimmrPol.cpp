#include<iostream>
using namespace std;

class Shape{
	public:
	virtual void draw () {
		cout<<"Drawing... " <<endl;
	}
};

class Rectangle: public Shape {
	public :

	void draw() {
		cout<<"Drawing rectangle " <<endl;
	}
	
};


class Circle : public Shape {
	public:

	void draw() {
		cout<<"Drawing circle "<<endl;	
	}

};

int main(){

	Shape *s;
	Shape sh;

	Rectangle rec;
	Circle cr;

	s  = &sh;
	s -> draw();
	
	s = &rec;
	s -> draw();


	s = &cr;
	s -> draw();	


}