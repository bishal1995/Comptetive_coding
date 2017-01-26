#include<iostream>
#include<utility>
#include<vector>
using namespace std;
// Processing each test case
void check_month( int ld ){
  int loan_duration = ld,depreciation_record_count = 0,last_month,month;
  float down_payment = 0.0,loan_amount = 0.0,last_month_rate;
  vector<pair<int,float>> depreciation_record; 
  cin>>down_payment>>loan_amount>>depreciation_record_count;
  for( int i = 0 ; i < depreciation_record_count ; ++i ){
    pair<int,float> buff;
    cin>>buff.first>>buff.second;
    depreciation_record.push_back( buff );
  }


  last_month = 0;
  last_month_rate = depreciation_record[0].second;
  last_month_count = ;

  
  int car_value = ( down_payment + loan_amount ) - ( ( loan_amount + down_payment ) * depreciation_record[0].second );
  while( car_value < loan_amount ){
    

    

  }

  

  


  

  

  

}

int main(){
  int lld=0;
  cin >> lld;
  while( lld >= 0 ){
    check_month( lld );
    cin>>lld;
  }
  return 0;
}



/*
30 500.0 15000.0 3
0 .10
1 .03
3 .002
12 500.0 9999.99 2
0 .05
2 .1
60 2400.0 30000.0 3
0 .2
1 .05
12 .025
-99 0 17000 1
*/
