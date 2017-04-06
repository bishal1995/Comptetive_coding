#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

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
  for( int i = 65 ; i < 127 ; ++i )
    num.push_back(i);  
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
    if( small > 0 ){
      if( smallVal == abs(prime[small-1] - number[i]) )
	nearPrime.push_back( prime[small-1] );
      else
	nearPrime.push_back( prime[small] );
    }      
    else
      nearPrime.push_back( prime[small] );
  }
  return nearPrime;
}
int main(){
  int size,T,S;
  char ch;
  vector<int> chartoint,magicnum,nearPrime;
  for( int i = 65 ; i < 127 ; ++i )
    chartoint.push_back(i);
  magicnum = magicalNumber();
  nearPrime = nearestPrime( magicnum , chartoint );
  size = chartoint.size();
  cin>>T;
  for( int i = 0 ; i < T ; ++i  ){
    cin>>S;
    for( int i = 0 ; i < S ; ++i ){
      cin>>ch;
      if( int(ch) > 64 )
	cout<<char(nearPrime[ int(ch) - 65 ]);
      else
	cout<<"C";
    }
    cout<<"\n";
  } 
  return 0;
}







