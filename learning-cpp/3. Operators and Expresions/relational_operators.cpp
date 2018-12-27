//program to explain the basic Relational operators in C++
// made by AYUSH VERMA(GodsEye-07)
//lang: c++

#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number:: ";
    cin>>n;

    cout<<n<<" < 10 is: "<<(n<10);
    cout<<n<<" > 10 is: "<<(n>10);
    cout<<n<<" <= 10 is: "<<(n<=10);
    cout<<n<<" >= 10 is: "<<(n>=10);
    cout<<n<<" != 10 is: "<<(n!=10);
    return 0;
}