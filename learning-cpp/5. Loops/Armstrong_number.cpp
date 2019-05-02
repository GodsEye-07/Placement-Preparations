//program to check if the number is Armstrong or not.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int i,n=153,sum=0,r,x;
    cout<<"Enter the number:: ";
    // cin>>n;
    x = n;
    while(n!=0){
        r = n%10;
        sum = sum + pow(r,3);
        //another way to write pow(number,power) is (r*r*r) but this is much simpler, when we go dynamic.

        n = n/10;
    }

    //check at the end if the new armstrong number is equal to the number if yes then it is an armstrong number else no.
    if(sum == x){
        cout<<"\nThe number is an Armstrong Number";
    }else{
        cout<<"\nThe number is not an Armstrong Number";
    }
    return 0;
}