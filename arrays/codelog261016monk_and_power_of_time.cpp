#include <iostream>
#include <vector>
using namespace std;
int main(){
  int buff,N;
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
  int vec_size = call_vec.size();
  int cmp_size = vec_size;
  int callPoi = 0;
  int idealPoi = 0;
  int steps_count = 0;
  while(cmp_size != 0){
    if( (ideal_vec[idealPoi] == call_vec[callPoi]) && (call_vec[callPoi] != 0) ){
      --cmp_size;
      ++steps_count;
      call_vec[callPoi] = 0;
      ++idealPoi;
      ++callPoi;      
      if( callPoi == vec_size )
        callPoi = 0;
    }
    else{
      if( call_vec[callPoi] == 0 ){
        ++callPoi;
        if( callPoi == vec_size )
        callPoi = 0;        
      }
      else{
        ++steps_count;
        ++callPoi;
        if( callPoi == vec_size )
          callPoi = 0;        
      }
    }
  }
  cout<<steps_count<<endl;   
  return 0;
}
