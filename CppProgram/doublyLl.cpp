#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* prev;

	Node(int d){
		this-> data = d;
		this-> next = NULL;
		this-> prev =NULL;
	}

};

void insertAtHead(Node* &head,int d){
	Node* temp = new Node(d);
	temp -> next = head;
	temp -> prev = temp;
	head = temp;
}

void insertAtTail(Node* &tail,int d){
	Node* temp = new Node(d);
	tail -> next = temp;
	temp -> prev = tail;
	tail = temp;
}

void print(Node* &head){

	Node* temp = head;
	while(temp != NULL) {
		cout<<temp -> data<< "  ";
		temp = temp -> next;
	}
	cout << endl<<endl;;

}

int getLen(Node* &head){
	int len = 0;
	Node* temp = head;
	while(temp != NULL) {
		len++;
		temp = temp -> next;
	}
	return len;


}




int main( ){
	Node* node1 = new Node(11);

	Node* head = node1;
	Node* tail = node1;

	print(head);

	cout<<getLen(head)<<endl;

	insertAtHead(head,12);
	print(head);

	insertAtHead(head,13);
	print(head);

	insertAtHead(head,6);
	print(head);

	insertAtTail(tail,12);
	print(head);

	

}