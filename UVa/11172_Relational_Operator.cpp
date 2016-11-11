#include<iostream>
#include<vector>
using namespace std;
int main(){
  int count,a,b,ssize;
  vector<char> sign;
  cin>>count;
  while(count--){
    cin>>a>>b;
    if(a>b)
      sign.push_back('>');
    if(a<b)
      sign.push_back('<');
    if(a==b)
      sign.push_back('=');   
  }
  ssize = sign.size();
  for(int i=0;i<ssize;++i)
    cout<<sign[i]<<'\n';    
  return 0;
}
