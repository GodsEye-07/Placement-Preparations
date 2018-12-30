//program to explain the Do-While syntax.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    cout<<"this program prints the number from 1-10";
    do{
        cout<<n<<" ";
        n+=1;
    }while(n<11);
    return 0;
}