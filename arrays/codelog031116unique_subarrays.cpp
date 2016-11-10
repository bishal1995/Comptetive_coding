#include<iostream>
#include<vector>
using namespace std;
int main(){

  vector<int> array;
  int N,buff,MAX=0;
  cin>>N;
  for(int i=0;i<N;++i){
    cin>>buff;
    array.push_back(buff);
    if(buff>MAX)
      MAX=buff;
  }
  vector<vector<int>> indexes (MAX,vector<int>(0)) ;
  vector<vector<int>> repeat_index;
  vector<vector<int>> pair;
  vector<int> test;

  

  
  for(int j=0;j<N;++j){
    indexes[array[j]].push_back(j);
  } 

  /*
  for(int k=0;k<MAX;++k){
    if( indexes[k].size() > 1 )
      repeat_index.push_back(indexes[k]);
  }
  int repeat_size = repeat_index.size();
  for(int l=0;l<repeat_size;++l){
    int size = repeat_index[l].size();
    for(int m=0;m<size;++m)
      for(int n=m+1;n<size;++n){
	pair.push_back({m,n});
      }
  }
  for(int o=0;o<pair.size();++o){
    cout<<pair[o][0]<<" "<<pair[0][1]<<endl;
  } 
  */
  


  return 0;
}
