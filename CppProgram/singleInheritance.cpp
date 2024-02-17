#include<iostream>
using namespace std;
class Employee {
	public:
	float salary = 50000;
};

class Programmer : public Employee{
	public :
	float bonus = 5000;

};

class Animal{
	public:
	void eat(){
	cout<<"Eating... " <<endl;
	}
};

class Dog : public Animal{
	public:
	void bark () {
		cout<<"Barking... " <<endl;
	}
};


class A {
	int a = 4;
	int b = 5;

	public :
	int mul(){
		int c = a * b;
		return c;
	}
};

class B: public A {
	public:

	void display(){
		int result = mul(); 
		cout<<" Multplication of A And  B : " <<result <<endl;
	}
};
int main() {

	Programmer p;
	
	cout<<p.bonus<<endl; 
	cout<<p.salary + p.bonus<<endl<<endl;;

	Dog d;

	d.eat();
	d.bark();


	B b;
	
	b.display();

}