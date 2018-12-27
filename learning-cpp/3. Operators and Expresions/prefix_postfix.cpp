//this program explains how the prefix and postfix operator works
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main()
{
    
    int a=10,b=20,c=0;
    cout<<"PREFIX INCREMENT"<<endl;

    c = (++a) + (++b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    a=10,b=20,c=0;
    cout<<"POSTFIX INCREMENT"<<endl;
    c = (a++) + (b++);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    a=10,b=20,c=0;
    cout<<"PREFIX DECREMENT"<<endl;
    c = (--a) + (--b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    a=10,b=20,c=0;
    cout<<"POSTFIX DECREMENT"<<endl;
    c = (a--) + (b--);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    return 0;
}
