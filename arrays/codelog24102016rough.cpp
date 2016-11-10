#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<bool> v1{1,45,1};
  for(int i=0;i<v1.size();++i)
    cout<<v1[i];
  cout<<endl;
  return 0;
}
