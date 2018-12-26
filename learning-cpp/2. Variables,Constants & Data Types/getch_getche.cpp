//program to explain the difference between getch() and getche()
//made by AYUSH VERMA(GodsEye-07)
// lang: c++


//this program contains the header file conio which is only compaptible with windows.
#include <iostream>
#include <conio>

using namespace std;

int main(){

    char ch;
    cout<<"Enter a character: ";
    ch = getch();
    cout<<"\n ch = "<<ch;

    cout<<"\n Enter a character: ";
    ch = getche();
    cout<<"\n ch = "<<ch;

    getch();
    return 0;
}
