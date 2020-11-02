#include<iostream>
using namespace std;
int main() {
  int n;
  M:
  cout<< "Введіть число:";
  cin>>n;
  if (n==0 || n==1){
   cout<<1;
 }
  else if (n>=2){
    long fact=1;
   for(int i=2; i<=n; i++){
  fact *= i;
 }
   cout<<fact;
 }
else{
  cout<<"Ви ввели не вірне число:"<<endl;
  goto M;
}
  return 0;
}
