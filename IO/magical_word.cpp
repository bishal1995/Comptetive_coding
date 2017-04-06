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
vector<int> nearestPrime( vector<int> prime, vector<int> number ){
  int psize , nsize , j = 0 , small = 0 , smallVal = 0 ;
  vector<int> nearPrime;
  psize = prime.size();
  nsize = number.size();
  for( int i = 0 ; i < nsize ; ++i ){
    j = 0 ;
    small = j ;
    smallVal = 100 ;
    while( j < psize ){
      int buff;
      buff = abs( prime[j] - number[i] );
      if( smallVal >= buff ){
	small = j;
	smallVal = buff;
      }
      else
	break;
      ++j;
    }
    nearPrime.push_back( prime[small] );
  }
  return nearPrime;
}



int main(){
  int size;
  vector<int> chartoint,magicnum,nearPrime;
  chartoint = getNumber();
  magicnum = magicalNumber();
  nearPrime = nearestPrime( magicnum , chartoint );
  size = magicnum.size();
  cout<<"\n";
  for( int i = 0 ; i < size ; ++i )
    cout<<magicnum[i]<<"\n";
  size = nearPrime.size();
  cout<<"-----------\n";
  for( int j = 0 ; j < size ; ++j  )
    cout<<chartoint[j]<<"  -  "<<nearPrime[j]<<"\n";
   
  
  return 0;
}
