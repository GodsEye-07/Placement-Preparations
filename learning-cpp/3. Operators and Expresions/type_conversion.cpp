// implicit-explicit type conversion
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main(){

    int intv = 20000,a=20;
    float c = 10.5;
    long d = 20L,e;


    //this is explicit type conversion'
    intv = (long(intv) * 10) / 20;
    cout<<"intv: "<<intv<<endl;


    //implicit type conversion
    e = ((a+c) * d) + 20;
    cout<<"e: "<<e<<endl;

    return 0;
}