//this program explains how the nested Switch case work
// made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    int a=100,b=200;
    switch(a){
        case 100:
            cout<<"Outer Switch Executed."<<endl;
            switch(b){
                case 200:
                    cout<<"Inner switch executed."<<endl;
            }
    }

    cout<<a<<endl<<b;

    return 0;
}
