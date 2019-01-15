//program to check if the number is perfect of not.
//made by AYUSH VERMA(GodsEye-07)
//lang: C++

#include <iostream>
using namespace std;

int main(){
    
    int i,n=28,sum=0;

    //logic behind taking n/2 -> if the number is divisible by any one from the first half then it will also be divisibel by the 2nd half. so to minimize the loop we take n/2
    for(i=1;i<=n/2;i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    cout<<"The number is: "<<n<<endl;
    if(sum == n){
        cout<<"It is a perfect number.";
    }
    else{
        cout<<"It is not a perfect number.";
    }
    
    return 0;
}
