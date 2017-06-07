#include<iostream>
#include<math.h>
using namespace std;
// Checks the minimum number for X and Y symmetries
bool XYsymmetric( int size ){
  bool sym , Xsym , Ysym;
  int count = size*size;
  bool arr[32][32];
  while( sym && ( count > 0 ) ){
    int ylimit = floor( (size-1) / 2 );
    for( int i = 0 ; i <= ylimit ; ++i ){
      for( int j = 0 ; j <= ylimit ; ++j  ){
	cin>>arr[i][j];
	--count;
      }
      for( int k = ylimit + 1 ; k < size ; ++k ){
	cin>>arr[i][k];
	sym =  arr[i][k] ^ arr[i][(size-1)-k];
	--count;
	if( sym )
	  goto loopend;
      }
    }
    for( int l = ylimit + 1 ; l < size ; ++l ){
      for( int m = 0 ; m < size ; ++m ){
	cin>>arr[l][m];
	sym = arr[l][m] ^ arr[(size-1)-l][m];
	--count;
	if( sym )
	  goto loopend;
      }
    }
  }
  loopend:
  return sym;  
}
// Main function
int main(){
  bool result[10];
  int T,size;
  cin>>T;
  for( int i = 0 ; i < T ; i++ ){
    cin>>size;
    result[i] = XYsymmetric(size);    
  }
  cout<<"Evals\n";
  for( int k = 0 ; k < T ; ++k )
    cout<<result[k]<<"\n"; 


  return 0;
}

