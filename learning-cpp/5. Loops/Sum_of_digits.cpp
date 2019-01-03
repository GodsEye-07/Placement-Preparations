//program that calculates the Sum of all the digits in the number.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    long int n = 8923691;
    int c=0,r=0;

    while(n!=0){
        r = n % 10;
        c+=r;
        n = n/10;
    }
    cout<<"The total sum of all the number of digits is: "<<c;

    return 0;
}