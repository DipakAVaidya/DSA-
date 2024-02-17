#include<iostream>
using namespace std;

class Node{ 
	public:
	int data;
	Node* left;
	Node* right;

	Node(int data){	
		this -> data = data;
		this -> left = NULL;
		this -> right = NULL;
	}

};

Node* inserttoBST(Node* root, int d) {
 	//base case

	if(root == NULL){
		root = new Node(d);
		return root;
	}

	if(d >  root -> data) {
		root -> right = inserttoBST(root -> right , d);
	}
	else {
		root -> left = inserttoBST(root -> left, d);
	}
	return root;
}


void takeInput(Node* &root){
	int data;
	cin >> data;

	while(data =! -1){
		root = inserttoBST(root,data);
		cin >> data;
	}
}

int main( ) {
	Node* root = NULL;

	cout<<"enter data to create bst " <<endl;
		
	takeInput(root);

}