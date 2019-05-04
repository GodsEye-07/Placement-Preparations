//program to explain break and continue statements.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include<iostream>
using namespace std;
int main(){

    //we will take 10 numbers and if the number is a factor of two we will print it, and if the number is greter than 9 then we will break the loop.
    int i,num;
    for(i=1;i<=10;i++){
        if(i%2 != 0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
        if(i>9){
            break;
        }
    }

    return 0;
}