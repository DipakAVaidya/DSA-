#include<iostream>
using namespace std;
class Stack {
	public:

	int top;
	int *arr;
	int size;
	
	// bhai Constructtor hai ye
	Stack(int size){
		this -> size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element){
	      if(size - top > 1){
		top++;
		arr[top] = element;
	        }
	       else{
		cout<<"bhai Stack to Khali haii " << endl;
	       }
	}

	void pop() {
		if(top >= 0){
			top--;
		}
		else{
		cout<<"Stck underrflow "<<endl;
		}
	}
	
	int peek() {
		if(top >= 0){
			return arr[top];
		}
		else{
			return -1;
		}
	}

	bool isEmpty() {
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
};
int main() {

	Stack st(5);

	st.push(3);

	st.push(4);
	st.push(2);

	cout<<" tp " << st.peek()<<endl;

	st.pop();
	cout<<"dekh delete hua ki nai "<< st.peek( )<< endl;
	st.pop();
	cout<<"dekh delete hua ki nai "<< st.peek( )<< endl;
	st.pop();
	cout<<"dekh delete hua ki nai "<< st.peek() << endl;

	if(st.isEmpty()){
		cout<<"khali ho gaya " <<endl;
	}
	else{
		cout<<"nai abhi kaha " << endl;
	}


}