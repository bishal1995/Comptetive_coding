#include<iostream>
using namespace std;
long long int fact(long long int num){
  if( num == 1 )
    return 1;
  else
    return num*fact(num-1);
}
int main(){
  long long int start,end,buff;
  cin>>start>>end;
  //cout<<fact(start);
  
  for( long long int i = start ; i < end + 1 ; ++i  ){
    buff = fact(i);
    cout<<"Factorial of - "<<i<<" : "<<buff<<"\n";
  }
  




  return 0;
}
