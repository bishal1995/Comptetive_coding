#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  int NCO,Xc,Yc,x1,y1,siz;
  vector<string> ans;
  while(scanf("%d",&NCO) && NCO != 0){
    scanf("%d %d",&Xc,&Yc);
    while(NCO--){
      scanf("%d %d",&x1,&y1);
      if( x1==Xc || y1==Yc )
	ans.push_back("divisa");
      if( x1>Xc && y1>Yc )
	ans.push_back("NE");
      if( x1<Xc && y1>Yc )
	ans.push_back("NO");
      if( x1>Xc && y1<Yc )
	ans.push_back("SE");
      if( x1<Xc && y1<Yc )
	ans.push_back("SO");
    }
  }
  siz = ans.size();
  for(int i=0;i<siz;++i)
    cout<<ans[i]<<"\n";
  return 0;
}
