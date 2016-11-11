#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  char ch;
  bool even = false;
  while(scanf("%c",&ch)!=EOF){
    if(ch == '"'){
      if(even==true){
	str.append("''");
	even=false;
      }
      else{
	str.append("``");
	even = true;
      }
    }
    else
      str.push_back(ch);
  }
  cout<<str;  
  return 0;
}
