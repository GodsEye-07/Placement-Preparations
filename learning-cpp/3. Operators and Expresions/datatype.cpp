//program to find the data type of any variable.
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{

    //lets take a few variables and try to find the data type of that.
    int a;
    char ch;
    long int x;

    cout<<"the data type of a is: "<<typeid(a).name()<<endl;
    cout<<"the data type of ch is: "<<typeid(ch).name()<<endl;
    cout<<"the data type of x is: "<<typeid(x).name()<<endl;

    return 0;
}
