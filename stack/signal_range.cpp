#include<iostream>
#include<stack>
using namespace std;
//Calculate range
int calculate_range( stack<int> towers ){
  int count = 1,comp,tower;
  int big = false;
  tower = towers.top();
  towers.pop();
  while( !towers.empty() && !big ){
    comp = towers.top();
    if( comp <= tower )
      ++count;
    else
      big = true;
    towers.pop();
  }
  return count;
}
//Main function
int main(){
  int T;
  cin>>T;
  for( int j = 0 ; j < T ; ++j ){
    int num,buffer,range;
    stack<int> tower_input;
    cin>>num;
    for( int i = 0 ; i < num ; i++ ){
      cin>>buffer;


      tower_input.push(buffer);
    }
    while( !tower_input.empty() ){
      range = calculate_range( tower_input );
      tower_input.pop();
      cout<<range<<" ";
    }
  }
  return 0;
}
































































