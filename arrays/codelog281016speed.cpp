#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<vector<int>> cars;
  vector<int> max_speed;
  int buff,N,TC;
  cin>>TC;
  for(int i=0;i<TC;++i){
    cin>>N;
    vector<int> speeds;
    for(int j=0;j<N;++j){
      cin>>buff;
      speeds.push_back(buff);
    }
    cars.push_back(speeds);
  }
  for(int k=0;k<TC;++k){
    int size = cars[k].size();
    int small = cars[k][0];
    int count = 1;
    for(int l=0;l<size;++l){
      if( cars[k][l] < small ){
	count++;
	small=cars[k][l];	
      }
      else
	continue;
    }
    max_speed.push_back(count);      
  }  
  for(int m=0;m<TC;++m)
    cout<<max_speed[m]<<endl;
  return 0;
}
