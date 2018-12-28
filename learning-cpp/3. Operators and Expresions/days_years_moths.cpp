//program to convert days into years, months, weeks, days
//made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main()
{
    
    int days, years, months,weeks, day=10000;

    years = day / 365;
    day = day % 365;
    months = day / 30;
    day = day % 30;
    weeks = day / 7;
    days = day  % 7;

    cout<<"Years:: "<<years<<endl;
    cout<<"Months:: "<<months<<endl;
    cout<<"Weeks:: "<<weeks<<endl;
    cout<<"Days:: "<<days<<endl;

    return 0;
}
