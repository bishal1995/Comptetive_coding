#include<iostream>
#include<stack>
using namespace std;
int main(){
  int size,buffer,balanced_sequence_size;
  stack<int> sequence;
  cin>>size;
  for( int i = 0 ; i < size ; ++i ){
    if( sequence.size() > 0 ){
      //cout<<"Non-empty sequence\n";
      cin>>buffer;
      if( (buffer*-1) == sequence.top() ){
	//cout<<"Balancing element\n";
	sequence.pop();
      }
      else{
	//cout<<"Non-balancing element\n";
	sequence.push(buffer);
      }
    }
    else{
      //cout<<"Empty sequrnce\n";
      cin>>buffer;
      sequence.push(buffer);
    }
  }
  balanced_sequence_size = size - sequence.size();
  //cout<<"The size of balanced sequence is : "<<balanced_sequence_size<<"\n";
  cout<<balanced_sequence_size;
  return 0;
}
