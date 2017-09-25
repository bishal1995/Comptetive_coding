#include<iostream>
using namespace std;

template <class X>
void swapper(X &a,X &b){
  X temp;
  cout<<"Before swapping a : "<<a<<" b : "<<b<<"\n";
  temp = a;
  a = b;
  b = temp;
  cout<<"After swapping a : "<<a<<" b :"<<b<<"\n";    
}
// main function
int main(){
  int a = 1 , b = 2 ;
  float c = 10.2 , d = 11.2 ;
  swapper(a,b);
  swapper(c,d);
  return 0;
    
}
