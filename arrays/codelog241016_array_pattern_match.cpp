#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N,buff;
  vector<int> call_vec,ideal_vec;
  cin>>N;
  for(int i=0;i<N;++i){
    cin>>buff;
    call_vec.push_back(buff);
  }
  for(int j=0;j<N;++j){
    cin>>buff;
    ideal_vec.push_back(buff);
  }
  int vec_size = ideal_vec.size();
  int cmp_size = ideal_vec.size();
  int call_poi = 0;
  int ideal_poi = 0;
  int last_callpoi = 0;
  int reqd_poi = 0;
  bool part_check = false;
  while(cmp_size!=0){
    if ( ideal_vec[ideal_poi] == call_vec[call_poi] ){
      part_check = true;
      ++ideal_poi;
      ++call_poi;
      --cmp_size;
      reqd_poi = call_poi;
      if(call_poi==vec_size)
	       call_poi=0;
      last_callpoi = call_poi;
    }
    else{
      if(part_check == true){
        call_poi = last_callpoi;
        ideal_poi = 0;
        cmp_size = vec_size;
        part_check = false;
      }
      else{
        ++call_poi;
        ideal_poi = 0;
        cmp_size = vec_size;	
      }      
    }   
  }
  cout<<(reqd_poi + vec_size)<<endl;
  return 0;
}
