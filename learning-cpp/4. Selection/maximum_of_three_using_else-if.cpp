//program to find the maximum of three numbers using else if operator
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main(){

    int a=10,b=20,c=30,max;
    if(a>b && a>c){
        max = a;
        cout<<"maximum: "<<a;
    }
    else if(b>a && b>c){
        max = b;
        cout<<"maximum: "<<b;
    }
    else if(c>a && c>b){
        max=c;
        cout<<"maximum: "<<c;
    }
    
    return 0;
}