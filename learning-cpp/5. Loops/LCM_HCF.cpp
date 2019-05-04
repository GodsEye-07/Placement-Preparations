//program to print the HCF and LCM of the two numbers.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include<iostream>
using namespace std;
int main(){

    int num1, num2,lcm,hcf,s;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num1>num2){
        s = num2;
    }else{
        s = num1;
    }
    for(int i=1;i<=s;i++){
        if((num1%i==0)&&(num2%i==0)){
            hcf = i;
        }
    }
    lcm = (num1*num2)/hcf;
    cout<<"The LCM of "<<num1<<" "<<num2<<" is: "<<lcm;
    cout<<"The HCF of "<<num1<<" "<<num2<<" is: "<<hcf;
    return 0;
}