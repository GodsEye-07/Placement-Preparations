//program to explain goto statement.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include<iostream>
using namespace std;
int main(){
    int i=1;
    cpp:
    cout<<" "<<i;
    i++;
    if(i<=10){
        goto cpp;
    }
    return 0;
}