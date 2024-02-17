#include<iostream>

using namespace std;

class Queue{
	public:
	int *arr;
	int size;
	int rear;
	int front;

	Queue(int size){
		this -> size = size;
		arr = new int[size];
		rear = 0;
		front = 0;
	}
	
	void enque(int data){
		if(rear == size){
			cout<<"Full " << endl;
		}
		else{
			arr[rear] = data;
			rear++;
		}
	}

	int deque( ){
		if(front == rear){
			return -1;
		}
		else{	
			arr[front] = -1;
			front ++;

			if(front == rear){
				front=0;
				rear = 0;
			}
			
		}
	}

	int qfront(){
		if(front == rear){
			return -1;
		}
		else{
			return arr[front];
		}
	}

	bool isEmpty(){
		if(front == rear){
			return true;
		}
		else {
			return false;
		}
	}

};

int main() {
	Queue q(4);

	q.enque(5);
	q.enque(4);
	q.enque(3);
	q.enque(2);

	cout<<q.qfront()<<" " ;

	q.deque();

	cout<<q.qfront()<<" " ;

	q.deque();

	cout<<q.qfront()<<" " ;
}
