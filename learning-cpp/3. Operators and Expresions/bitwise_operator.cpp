//program to explain bitwise operators.
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main(){

    int a=3,b=5,c;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;


    //converts both of the variables into binary and then perform the bitwise operations.
    c = a & b;
    cout<<"a & b: "<<c;

    c = a | b;
    cout<<"a | b: "<<c;

    c = a^b;
    cout<<"a ^ b: "<<c<<endl;

    c = ~a;
    cout<<"~a: "<<c<<endl;

    c = a<<3;
    cout<<"a<<3: "<<c<<endl;

    c = b>>2;
    cout<<"b>>2: "<<c<<endl;

    return 0;
}