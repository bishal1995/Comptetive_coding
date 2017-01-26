#include<iostream>
#include<set>
#include<string>
using namespace std;

// Returning unique array size
int unique_array_weight( int size ){
  return (size*(size+1)*(size+2))/6;
}
// Getting weight of array
int weight( string input ){
  int size = input.length(),i=1,start=0,end=0 ;
  int weight = 0;
  set<char> test;
  auto status = test.insert(input[0]);
  while( i<size ){
    status = test.insert(input[i]);
    if( status.second ){
      // found repeated element
      end = i;
      int diff = end - start;
      cout<<diff<<"\n";
      weight += unique_array_weight(diff);
      test.clear();
      start = i;      
    }
    else{
      continue;
    }
    ++i;
  }
  return weight;  
}


int main(){
  string str = "abcde";
  int value = weight(str);
  cout<<value<<"\n";
   

  

  
  return 0;
}
