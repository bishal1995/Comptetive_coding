#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> ratings;
  int N,buff,total_rating=0;
  cin>>N;
  for(int i=0;i<N;++i){
    if(i!=0){
      cin>>buff;
      if( buff == 0 )
	ratings.pop_back();
      else
	ratings.push_back(buff);
    }
    else{
      cin>>buff;
      ratings.push_back(buff);
    }          
  }
  total_rating = accumulate(ratings.begin(),ratings.end(),0);
  cout<<total_rating;  
  return 0;
}
