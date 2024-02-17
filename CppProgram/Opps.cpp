#include<iostream>

using namespace std;

class Hero {
	private :
	int health;
	char level;

	
	public: 
	
	Hero () { 
		cout<<"This Is Constructor "<<endl;
	}

	//parameterise Constructor 
	Hero (int  health){
		cout << "This -> " << this <<endl;
		this -> health = health;
	}

	Hero (int health , char level) {
		this -> health = health;
		this -> level = level;
	}
	
	// copy constructor
	/*Hero(Hero& temp) {
		cout << "Copy constructor called " << endl;
		this -> health = temp.health;
		this -> level = temp.level;
	}*/
	int getHealth(){
		return health;
	}

	char getLevel() {
		return level;
	}

	int setHealth(int h) {
		health = h;
	}

	char setLevel(char l) {
		level = l;
	}
 
void print( ){
		cout << endl;
		cout<<" [ Name:  "<< this->level<< " ," << endl;
		cout <<"Health:  " << this ->health << " ]";
		
		cout<<endl<<endl;
	}
};

int main() {
	

	Hero s(12, 'R');
	s.print();
	s.print();
	// COPY CONSTRUCTOR
	Hero r(s);
	r.print();

	









	/*
	// static allocaton
	Hero mahi;
	mahi.setHealth(60);
	mahi.setLevel('A');

	cout<<"current Health is: "  << mahi.getHealth()<<endl;
	cout<<"current level is : "<< mahi.getLevel() << endl;

	// dynamic allocation

	Hero *b = new Hero();
	b -> setHealth(60);
	b -> setLevel('A');
	cout<<"current Health is: "  <<b -> getHealth()<<endl;
	cout<<"current level is : "<< b -> getLevel() << endl;
	
	Hero ram(10 ,'a');
	// cout << "Adress of ram " << &ram << endl;
	ram.print();

	Hero *h = new Hero(20, 'c');

	*/
}