// this program expalains the basic of C++ Arithematic Operators.
// made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main(){

    int a=10,b=5,result;

    //addition operator
    result = a+b;
    cout<<a<<" + "<<b<<" = "<<result<<endl;

    //subtraction operator
    result = a-b;
    cout<<a<<" - "<<b<<" = "<<result<<endl;

    //multiplication operator
    result = a*b;
    cout<<a<<" * "<<b<<" = "<<result<<endl;

    //division operator
    result = a/b;
    cout<<a<<" / "<<b<<" = "<<result<<endl;

    //remainder operator
    result = a%b;
    cout<<a<<" % "<<b<<" = "<<result;

    return 0;
}