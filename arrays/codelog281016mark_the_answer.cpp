#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> questions;
  int N,buff,j=0,X,found1=0,marks=0;  
  cin>>N;
  cin>>X;
  for(int i=0;i<N;++i){
    cin>>buff;
    questions.push_back(buff);
  }
  while(found1!=2 && j<N){
    if(questions[j] <= X ){
      ++j;
      ++marks;
    }
    else{
      ++j;
      ++found1;
    }
  }
  cout<<marks;  
  return 0;
}
