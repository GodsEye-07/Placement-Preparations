//program that calculates the number of total digits in the number.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    long int n = 8923691;
    int c=0;

    while(n!=0){
        n = n/10;
        c+=1;
    }
    cout<<"The total number of digits is: "<<c;

    return 0;
}