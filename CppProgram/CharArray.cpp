#include<iostream>
using namespace std;

// conver upper case t lower case
char toLowerCase(char ch) {
	if(ch >= 'a' && ch <= 'z' ) {
		return ch;
	}
	else {
		char temp = ch - 'A' + 'a';
	}

}

//check String Palimdrom or not
bool checkPalimdrom(char name[],int n) {
	int s = 0;
	int e = n - 1;

	while(s <= e){
		if( toLowerCase(name[s]) !=toLowerCase( name[e]) ) {
			return 0;
		}
		else {
			s++;
			e--;
		}
	}
	return 1;
}

// String Reverse Question
void reverseChar(char name[], int n){
	int s=0;
	int e = n -1;
	
	
	while(s<e){
		swap(name[s++],name[e--]);
	}
}


int getLength(char name[]) {
	int count = 0;
	for(int  i =0; name[i] != '\0';i++){	
		count++;	
	}
	return count;
}



int main() {
	char name[20];
	 cout<<"Enter The name " << endl;
	cin>>name;

	// name[2] = '\0';

	cout<<" Your Name Is " <<name << endl;
	
	int len = getLength(name);
	cout<<"Lentgth of A char is : "<< len <<endl;

	 reverseChar(name,len);
	cout<<"Your name in reverse : " <<name<<endl;

	bool check =checkPalimdrom(name,len);
	
	if(check){
		cout<<name << "  is a palimdrom: "<<endl;
	}
	else {
		cout<<name<<"  is not a palimdrom " <<endl;
	}
}









