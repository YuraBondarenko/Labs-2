#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int c0, s;
    cout<<"Enter the number ";
    cin>>c0;
    s = 0;
    if(c0>=0){
        while(c0!=1){
            if(c0%2==0){
                c0 = c0/2;
            }
            else{c0 = 3*c0+1;}
        cout<<c0<<"\n";
        s++;
        }
        
    }
    cout<<"\n"<<"The number of steps which you had to use : "<<s;
    
    
}