//program to check if the year is leap year or not using else-if operator.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main(){

    int year = 5673400;

    if(year%100 == 0){

        if(year%400 == 0){
            cout<<"It is a Leap Year.";
        }
        else{
            cout<<"It is not a Leap Year.";
        }
    }
    else if(year%4 == 0){
        cout<<"It is a Leap Year.";
    }
    else{
        cout<<"It is not a Leap Year.";
    }

    return 0;
}