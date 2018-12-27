//this program is to expalain the basics of logical operators.
// made by AYUSH VERMA(GodsEye-07)
//lang:  c++

#include <iostream>
using namespace std;

int main()
{
    cout<<"Logical AND operator --> &&"<<endl;
    cout<<"((10<20) && (20>11)):: "<<((10<20) && (20>11))<<endl;
    cout<<"((10<20) && (20<11)):: "<<((10<20) && (20<11))<<endl;

    cout<<"Logical OR operator --> ||"<<endl;
    cout<<"((10>20)||(10<5)):: "<<((10>20)||(10<5))<<endl;
    cout<<"((10<20)||(10<5)):: "<<((10<20)||(10<5))<<endl;

    cout<<"Logical NOT operator --> !"<<endl;
    cout<<"(!(10<20)):: "<<(!(10<20))<<endl;
    cout<<"(!(10>20)):: "<<(!(10>20))<<endl;


    return 0;
}

