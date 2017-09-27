#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> s1;
  int buffer;
  for ( int i=0 ; i < 5 ; i++ ){
    cin>>buffer;
    s1.push(buffer);
  }
  cout<<"\nSize of stack after taking input is : "<<s1.size()<<"\n";
  while( !s1.empty() ){
    cout<<s1.top()<<" - ";
    s1.pop();
  }
  cout<<"\nSize of stack after emptying is : "<<s1.size()<<"\n";
  return 0;

}


