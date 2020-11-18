#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
   int i1,i2;
   start:
cout<<"Enter a first number ";
cin>>i1;
cout<<"Enter a second number ";
cin>>i2;
    int i3;
    
cout<<"MENU:"<<"\n";
cout<<"0 - exit"<<"\n";
cout<<"1 - addition"<<"\n";
cout<<"2 - subtraction"<<"\n";
cout<<"3 - multiplication"<<"\n";
cout<<"4 - division"<<"\n";
cout<<"Your choice?"<<"\n";
cin>>i3;

switch(i3){
    case 1: cout<<i1+i2<<endl; goto start; 
    case 2: cout<<i1-i2<<endl; goto start;
    case 3: cout<<i1*i2<<endl; goto start;
    case 4: if(i2==0) {cout<<"Division by 0"<<endl; goto start;} else {cout<<(double)i1/i2<<endl; goto start;}
    case 0: goto end;
    default: cout<<"Wrong input"<<endl; goto start;
}



end:
cout<<"End";
return 0;
}



