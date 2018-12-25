//This Code is an example on how to set the desired width on any line.
//Made by AYUSH VERMA.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a=12,b=123,c=1234;
    cout<<"Without using the setw() command:: "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    cout<<"Using the same with setw() command:: "<<endl;
    cout<<setw(7)<<a<<endl;
    cout<<setw(7)<<b<<endl;
    cout<<setw(7)<<c<<endl;
    return 0;
}
