#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
    int n;
    double c=1.0;
    cout<<"цифру";
    cin >> n;
    if (n<64){
    for (int i=1; i<=n; i++)
    {
     c = 2*c;
    
    }
       c = 1/c;
     cout << c;
    }
    else 
    {
    cout << "інще";
    cin >>n;
    }
}