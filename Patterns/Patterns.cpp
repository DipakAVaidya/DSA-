#include<iostream>
using namespace std;

void printP(int n) {
  for(int i=1; i<=n; i++) {
    for(int j = 1; j<=n; j++) {
      cout<<"*";
    }cout<<endl;
  }
}

void printP1(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << "*" ;
    }
    cout<<endl;
  }
}

void printp2(int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i+1; j++)
      {
        cout<<"*";
      }cout<<endl;
  }
}

void printP3(int n){
  for(int i = 0; i < n; i++){
    
    for(int j = 0; j<n-i-1;j++){
      cout<<" ";
    }

    char ch = 'A';
    int b = (2*i)/2;
    for(int k =0;k<2*i+1;k++){
      cout<<ch;
      if(ch <= b) ch++;
      else ch--;
    }

    for(int j = 0; j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int t;
  cin>>t;

  for(int i = 0; i < t; i++) {
    int n;
    cin>>n;
   /* printP(n);
    cout<<endl;
    printP1(n);
    cout<<endl;
    printp2(n);
    cout<<endl;
*/
    cout<<endl;

    printP3(n);
  }
}
