//explaing the concept of else if syntax.
//made by AYUSH VERMA(GodsEye-07)
//lang: c++


// write a program to grade the student according to the marks distribution-
//      Marks              Grade
//      100 to 80           A+
//      80 to 70            A
//      70 to 60            B
//      60 to 40            C
//      40 to 0             F

#include <iostream>
using namespace std;

int main()
{   
    int marks = 60;

    if(marks>=80 && marks<100){
        cout<<"A+";
    }
    else if(marks>=70 && marks<80){
        cout<<"A";
    }
    else if(marks>=60 && marks<70){
        cout<<"B";
    }
    else if(marks>=40 && marks<60){
        cout<<"C";
    }
    else if(marks>=0 && marks<40){
        cout<<"F";
    }
    
    return 0;
}
