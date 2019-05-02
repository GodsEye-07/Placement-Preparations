//program to check if the number is prime or not.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main(){

    int n,i,flag=0;
    cout<<"Enter the number:: ";
    cin>>n;
    for(i=2;i<n/2;i++){
        if(i%2 == 0){
            flag = 1;
            break;
        }
        
        if(flag == 1){
            cout<<"The number is not a Prime Number.";
        }
        else{
            cout<<"The number is a Prime Number";
        }
    }
    return 0;
}