//program to explain the basics of Switch case syntax by checking if the word is Vowel or not.
// made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    switch(ch){

        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout<<"It is a Vowel";
        default:
            cout<<"It is not a Vowel.";
    }
    
    return 0;
}
