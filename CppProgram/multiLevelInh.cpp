#include<iostream>
using namespace std;

class Animal{
	public :
	void eat() {
		cout<<"Eating... " <<endl;
	}
};

class Dog: public Animal {
	public:
	void bark() {
		cout<<"BArking.. " <<endl;
	}
};

	
class babyDog: public Dog{
	public:
	void weep() {
		cout<<"Weeping.. : "<<endl;
	}
};

int main() {
		
	babyDog b;
	
	b.weep();
	b.bark();
	b.eat();
}