// Example program
#include <iostream>
using namespace std;

int main(void)
{
    int year, month, day, n;
    cout<<"year\n";
 cin>>year;
    cout<<"month\n";
 cin>>month;
    cout<<"day\n";
 cin>>day;
 if(year>=1901&&year<=2100&month>=1&&month<=12&&day>=1){
 month=month-2;
 if(month<0){
     month=month+12;
     year=year-1;
 }
 month*=83/32;
 month=day+month;
 year=year+month;
 month=year/4+month;
 month=year/100-month;
 month=year/400+month;
 n=month%7;
 
 if(n==0){
     cout<<"sunday";
 }
 if(n==1){
     cout<<"mondaY";
 }
 if(n==2){
     cout<<"T";
 }
 if(n==3){
     cout<<"W";
 }
 if(n==4){
     cout<<"T";
 }
 if(n==5){
     cout<<"F";
 }
 if(n==6){
     cout<<"S";
 }
 cout<<n;
 
 }
}