#include<iostream>
#include<vector>
#include<set>
using namespace std;
void getlonglongint(long long int &x){
  bool neg=false;
  register int c;
  x=0ll;
  c=getchar();
  if(c=='-'){
    neg=true;
    c=getchar();
  }
  for(;(c>47 && c<58);c=getchar())
    x = (x<<1)+(x<<3)+c-48;
  if(neg)
    x*=-1ll;
}
int main(){
  int N,NQ=0,Qtype;
  long long int size,count,freq,buff;
  cin>>N;
  vector<long long int> numbers;
  multiset<long long int> args;
  for(long long int i=0;i<N;++i){
    getlonglongint(buff);
    numbers.push_back(buff);
    args.insert(buff);
  }
  size = numbers.size();
  cout<<size<<endl;
  
  cin>>NQ;
  cout<<NQ;

  for(int j=0;j<NQ;++j){
    cout<<j<<"\n";

    cin>>Qtype;
    if(Qtype==0){
      bool found=false;
      cin>>freq;
      for(long long int k=0ll;k<size;++k){
	count = args.count(numbers[k]);
	if(count>=freq){
	  cout<<numbers[k]<<"\n";
	  found=true;
	  break;      
	}
      }
      if(found==false)
	cout<<0<<"\n";
    }
    else{
      bool found=false;
      cin>>freq;
      for(long long int m=0ll;m<size;++m){
	count = args.count(numbers[m]);
	if(count==freq){
	  cout<<numbers[m]<<"\n";
	  found=true;
	  break;
	}
      }
      if(found==false)
	cout<<0<<"\n";
    }
  
    }
  return 0;
}
