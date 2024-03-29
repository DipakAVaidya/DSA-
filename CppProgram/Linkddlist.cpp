#include <iostream>

using namespace std;

class Node {
	public:
	int data;
	Node* next;
	
	// constructor
	Node(int data) {
		this -> data = data;
		this -> next = NULL; 
	}

};

	// Insert into head
void insertAtHead(Node* &head, int d) {
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
	
}

	// insert Into tail;
void insertAtTail(Node* &tail, int d) {
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = tail -> next;
}

void print(Node* &head) {
	Node* temp = head;
	
	while(temp != NULL)
	{
		cout<<temp -> data << " ";
		temp= temp -> next;
	}
	cout<<endl;
	
}
int main() {
	Node* node1 = new Node(10);
	//cout<< node1 -> data <<endl;
	//cout<< node1 -> next <<endl;

	Node* tail = node1;
	Node* head = node1;
	print(head);
	
	insertAtHead(head, 12);
	print (head);
	
	
	insertAtTail(tail,30);
	print(tail);

	insertAtTail(tail,3);
	print(tail);

	insertAtTail(tail,10);
	print(tail);



	return 0;
}