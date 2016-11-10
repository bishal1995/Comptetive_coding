#include<iostream>
#include<vector>
using namespace std;

// find even or odd
void even(vector<bool>& vec,int end){
  if (vec[end-1]==0)
    cout<<"EVEN\n";
  else
    cout<<"ODD\n";
}
// flip Xth element
void flip(vector<bool>& vec,int X){
  if(vec[X-1]==1)
    vec[X-1]=0;
  else
    vec[X-1]=1;
}
// main function
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<bool>v1;
  bool buff,Qbuff;
  int N,Q,X1,C1,C2;
  cin>>N>>Q;
  for(int i=0;i<N;++i){
    cin>>buff;
    v1.push_back(buff);
  }
  for(int j=0;j<Q;++j){
    cin>>Qbuff;
    if(Qbuff==1){
      cin>>X1;
      flip(v1,X1);
    }
    else{
      cin>>C1>>C2;
      even(v1,C2);
    }
  }  
  return 0;
}
