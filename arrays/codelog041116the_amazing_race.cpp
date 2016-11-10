#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int N;
  cin>>N;
  vector<long long int> winner;
  for(long long int i=0ll;i<N;++i){
    long long int size,buff,poi=0ll,XP=0ll;
    cin>>size;
    vector<long long int> input;
    for(long long int j=0ll;j<size;++j){
      cin>>buff;
      input.push_back(buff);
    }
    for(long long int k=0ll;k<size;++k){
      long long int X=0ll,left_ptr=k-1,right_ptr=k+1;
      for(;left_ptr>-1;--left_ptr)
         if(input[left_ptr]>=input[k])
           break;
      for(;right_ptr<size;++right_ptr)
        if(input[right_ptr]>=input[k])
          break;
      if(right_ptr==size)
        --right_ptr;
      X=X+(k-(left_ptr));
      X=X+((right_ptr)-k);
      long long int sight_val = X*(k+1);
      if(sight_val>XP){
         XP=sight_val;
         poi=k+1;
      }      
    }
    winner.push_back(poi);   
  }
  for(long long int l=0ll;l<N;++l)
    cout<<winner[l]<<endl;
  return 0;
}