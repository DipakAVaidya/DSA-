#include<iostream>
using namespace std;

class Node { 

	public:
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		this -> next = NULL;
		
	}

	void insertAtHead(Node* &head, int d) {
		Node* temp  = new Node(d);
		temp -> next = head;
		head = temp;
	}

	void insertAtMiddle(Node* &head, int position, int d) {

		if(position == 1){
			insertAtHead(head,d);
		}
		Node* temp = head;
		int cnt = 1;
	
		while(cnt < position) {
			temp = temp -> next;
			cnt++;
			
		}

		Node* nodeToInsert = new Node(d);

		nodeToInsert -> next = temp -> next;
		temp -> next = nodeToInsert;

 	}

	void insertAtTail(Node* &tail,int d) {
		Node* temp  = new Node(d);
		tail -> next = temp;
		tail = temp;

 
 	}

	void print(Node* &head){
		Node* temp = head;
		while(temp != NULL) {
			cout << temp -> data <<" ";
			temp = temp -> next;

		}
		cout << endl;
	}

	
	void printTail(Node* &tail){
		Node* temp = tail;
		while(temp != NULL) {
			cout << temp -> data <<" ";
			temp = temp -> next;

		}
		cout << endl;
	}
	

	

};

int main () {
	Node* node1 = new Node(10);

	// cout<<node1 -> data <<" " ;
	// cout<< node1 -> next   <<endl; 

	Node* tail  = node1;

	tail -> printTail(tail);

	tail -> insertAtTail(tail,12);

	tail -> printTail(tail);

	tail -> insertAtTail(tail,13);

	tail -> printTail(tail);


	cout << endl << endl;

	Node* head  = node1;

	head -> print(head);

	head -> insertAtHead(head,12);

	head -> print(head);

	head -> insertAtHead(head,13);

	head -> print(head);

	head-> insertAtMiddle(head, 1, 22);

	 head ->  print(head);

	
}