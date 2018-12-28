//to show the precedence in which the operators work.
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main()
{
    float res;
    res = 1.0 + 2.0 * 3.0 / 4.0;
    cout<<"res: "<<res<<endl;

    res = 1.0 / 2.0 + 3.0;
    cout<<"res: "<<res<<endl;

    res = (1.0 + 2.0) / 3.0;
    cout<<"res: "<<res<<endl;

    res = (1.0 + 2.0 / 3.0) + 4.0;
    cout<<"res: "<res<<endl;

     return 0;
}
