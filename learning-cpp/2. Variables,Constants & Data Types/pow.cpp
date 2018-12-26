//program to use the Math library function  - 'pow()'
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float ci,p,r,t,a;

    cout<<"Enter Principal,Rate and Time:: ";
    cin>>p>>r>>t;

    a = p*pow((1 + (r/100)),t);
    ci = a-p;
    cout<<"\n Compound Interest is Rs."<<ci;
    
    return 0;
}
