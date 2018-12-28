//program to explain Ternany operator. (?:)
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main()
{
    //let's write a program to find the highest of two numbers.
    int a=5,b=3,c=10,d,res;

    //this checks if a is greater than b if yes(?) then d = a else(:) d = b
    d = (a>b)?a:b;
    cout<<"the greater number is: "<<d<<endl;
    
    //program to find the greates of three numbers.
    res = a > b ? ( a > c ? a : c) : (b > c ? b : c);
    cout<<"the greatest of three numbers is: "<< res <<end;

    return 0;
}
