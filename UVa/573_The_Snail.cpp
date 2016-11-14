#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
  int wh,cl,dn,ff;
  vector<int> ans;
  while(scanf("%d %d %d %d",&wh,&cl,&dn,&ff) && wh!= 0){
    bool run=true,sucess=false;
    int days=0;
    float totalClimbed = 0.0,clipow = cl*1.0,pf=(clipow*ff)/100.0,dwn=dn*1.0,whd = wh*1.0;
    while(run){
      days++;
      if( clipow > 0.0 )
	totalClimbed += clipow;
      clipow -=pf;
      if(totalClimbed >= whd ){
	ans.push_back(days);
	run=false;
      } 
      totalClimbed -= dwn;
      if( totalClimbed<=0.0 ){
	ans.push_back(days*(-1));
	run=false;	
      }
    }
  }
  int size = ans.size();
  for(int i=0;i<size;++i)
    cout<<ans[i]<<"\n";

  return 0;
}
