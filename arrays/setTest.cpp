#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
  multiset<vector<int>> s1; // For multiset repetation is allowed i.e. size is 3
  set<vector<int>> s2;      // for set repetation is no allowed i.e. size is 2
  vector<int> v1 {1,2,3,4};
  vector<int> v2 {2,3,4,5};
  vector<int> v3 {1,2,3,4};
  s1.insert(v1);
  s1.insert(v2);
  s1.insert(v3);
  cout<<s1.size()<<endl;
  
  
  return 0;
}
