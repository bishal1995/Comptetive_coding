#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// Function for getting numbers 
vector<int> getNumber(){
  vector<int> vctr;
  char ch = 'A';
  int size=0;
  for(int i = 0 ; i < 58 ; ++i ){
    if(!( int(ch)>=91 && int(ch)<=96 ))
      vctr.push_back( int(ch) );
    ch++;
  }
  return vctr;
}
// Prime checking function
bool isPrime(int number){
  bool prime = true;
  int i = 3;
  int numroot = ceil( sqrt( number ) );
  while( prime && i < numroot + 1 ){
    if( number % i == 0 )
      prime = false;
    else
      ++i;
  }
  return prime;
}
// Get magical number
vector<int> magicalNumber(){
  bool prime = true;
  int size;
  vector<int> num, magicalnum;
  num = getNumber();
  size = num.size();
  for( int i = 0 ; i < size ; ++i ){
    if( num[i] % 2 == 0 )
      continue;
    else{
      prime = isPrime( num[i] );
      if( prime == true )
	magicalnum.push_back(num[i]);
    }
  }
  return magicalnum ;  
}
// Getting the closest letter




int main(){
  int size;
  vector<int> chartoint,magicnum;
  chartoint = getNumber();
  magicnum = magicalNumber();

  size = magicnum.size();
  cout<<"\n";
  for( int i = 0 ; i < size ; ++i )
    cout<<magicnum[i]<<"\n";


  
  
  return 0;
}
