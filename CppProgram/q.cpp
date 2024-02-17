#inlude<iostream>
using namespace std;

class Queue{
	public:
	int *arr;
	int front;
	int rear;
	int size;

	
	Queue(int size) {
		this -> size = size;
		front = 0;
		 rear = 0;
		arr = int [size];
	}

	void enque(int data) {
		if(rear == size) {
			cout<<"Queue is Ful " <<endl;
		}
		else{
			arr[rear] = data ;
			rear ++;
		}
	}

	int deque(){
		if(front == rear) {
			return -1;
		}
		else {
			int ans = arr[front]; 
			arr[front] = -1;
			front++;
			if(front == rear) {
				front = 0;
				rear = 0;
			}
			return ans;
		}
	}

	int front() {
		if(front == rear) {
			return -1;
		}
		else {
			return arr[front];
		}	
	}

	bool isEmpty() {
		if(front == rear){
			return true;
		}
		else{
			return false;
		}
	}
};

int main() {
	Queue  q(5);
	

	

}