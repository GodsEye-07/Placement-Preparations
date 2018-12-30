//program to convert a number and check if the number is a uppercase letter or a lower case letter or a symbol
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

/*
NOTE -  
It is very important to know the range of all the ascii characters.
There are many competetive questions that deals with ascii and are easily solvable.
A lot of companies also ask STRING related question which relate to ascii.

the range to keep in mind - 

1. Upper case Letter - 65-90
2. Lower case Letter - 97-122
3. Digits - 48-57
4. other rest all are special characters and symbols.
*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a charater to check the output: ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Character is an Uppercase letter.";
    }
    else if(ch>=97 && ch<=122){
        cout<<"Character is a Lowercase letter.";
    }
    else if(ch>=48 && ch<= 57){
        cout<<"Character is a Digit.";
    }
    else{
        cout<<"Character is a special symbol.";
    }
    return 0;
}


/*
Alternatively the program can also be checked by directly checking the character
example - ch>='A' && ch<='Z'
similarly it can also be done for other characters or digits also.
*/
