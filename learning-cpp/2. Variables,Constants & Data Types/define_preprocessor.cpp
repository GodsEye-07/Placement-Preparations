//This Code tell how can we define something which is a cosntant and is being used multiple times.
//Made by AYUSH VERMA(GodsEye-07).
//lang: c++

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14

int main(){
    float radius=10,area;
    area = PI*radius*radius;
    cout<<"area of circle is: "<<area;
    return 0;
}