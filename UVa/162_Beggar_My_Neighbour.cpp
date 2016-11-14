#include<iostream>
#include<vector>
#include<string>
using namespace std;

// players cards
vector<string> player1;
vector<string> player2;
//current Player
int CP=1,WP=0;
//Next Move function
int nextMove(int move){
  string last_card="00";
  if(CP==1){
    last_card = player1.back();
    player1.pop_back();
    while(move--){
      

    }
    
  }
  else{


  }
  
}



int main(){
  



  
  return 0;
}
