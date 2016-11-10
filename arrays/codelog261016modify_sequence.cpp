#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int N,buff,min;
  cin>>N;
  vector<int> sequence;
  for (int i=0;i<N;++i){
    cin>>buff;
    sequence.push_back(buff);
  }
  int SUM=0; 
  for( int j=0;j<N-1;++j ){
    sequence[j+1] = sequence[j+1] - sequence[j];
    sequence[j] = 0;
   }  
  if(sequence[N-1]!=0)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}
