#include<iostream>
#include<vector>
using namespace std;
int main(){
  int N,buff;
  char Qtype;
  vector<int> food_store;
  cin>>N;
  for(int i=0;i<N;++i){
    cin>>Qtype;
    if(Qtype=='1'){
      if(food_store.begin()==food_store.end())
	cout<<"No Food\n";
      else{
	cout<<food_store[food_store.size()-1]<<endl;
	food_store.pop_back();
      }      
    }
    else{
      cin>>buff;
      food_store.push_back(buff);
    }
  }  
  return 0;
}
