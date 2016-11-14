#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int TC,N,X,Y,tcall=0;
	vector<int> ans;
	cin>>TC;
	while(TC--){
		tcall=0;
		int i;
		scanf("%d %d %d",&N,&X,&Y);
		int Ytime=0;
		for(i=2;(i<N) && (i!=Y) ;i+2){
			++Ytime;
			++tcall;
			if(tcall%X == 0){
				Ytime = Ytime + 2;
			}
		}
		if(i!=Y){
			for(int i=2;(i<N)&&(i!=Y);i+2){
				++Ytime;
				++tcall;
				if(tcall%X == 0)
					Ytime = Ytime+2;
			}
		}
		ans.push_back(Ytime);
	}
	int size = ans.size();
	for(int j=0;j<size;++j)
		cout<<ans[j]<<"\n";
	return 0;
}
