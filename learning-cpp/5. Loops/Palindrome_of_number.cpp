//program that checks if the number is palindrome or not.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    long int n = 8923691;
    int r,x,rev;

    x = n;
    rev = 0;
    while(n!=0){
        r = n%10;
        rev = (rev*10) + r;
        n = n/10;
    }
    cout<<"Orignal Number is: "<<x<<endl;
    cout<<"Reversed Number is: "<<rev<<endl;
    if(rev == x){
        cout<<"The number is a palindrome.";
    }
    else{
        cout<<"The number is not a palindrome.";
    }
    return 0;
}