#include<iostream>
using namespace std;

class Stack {
	public:
	int *arr;
	int top;
	int size;

	Stack(int size) {
		this -> size = size;
		arr = new int[size];
		 top = -1;
	}

	
	void push(int  element) {
		if(size - top >1){
			top++;
			arr[top] = element;
		}
		else {
			cout<< "Stack Overflow " <<endl;
		}
	}

	
	void pop( ) {
		if(top >= 0) {
			top--;	
		}
		else {
			cout<<"Stack underflow " << endl;
		}
	}

	int peak() {
		if(top >= 0){
		return arr[top];

		}

		else {
			cout<<"Stack is Empty " <<endl;
			return -1;
		}
	}

	bool isEmpty() {
		if(top == -1) {
			return true;
		}
		else {
			return false;
		}
	}
};


int  main() {
	Stack st(5);
	st.push(21);
	st.push(23);
	st.push(24);
	st.push(25);

	st.pop();
	st.pop();

	cout<<st.peak() <<endl;
	

	st.pop();
	st.pop();

	bool found = st.isEmpty();
	if(found){
		cout<< "Stack isEMpty  " <<endl;
	}else {
		cout<<" STack is Not Empty " <<endl;
	}

}