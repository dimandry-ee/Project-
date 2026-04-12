#include "trapezoid.h"
#include <iostream>;
using namespace std;

trapezoid::trapezoid(float a, float b, float c, float d, float h){
    this-> a = a;
    this-> b = b;
    this-> c = c;
    this-> d = d;
    this-> h = h;
}
bool flag = 0;

void trapezoid::is(){
    if(a > 0 && b > 0 && c > 0){
        flag = 1;
    }
    else{
        cout << "the trapezoid doesnt exist" << endl;
    }
}

void trapezoid::S(){
    if(flag == 1){
        float s = h * (a + b) / 2;
        std::cout << s << endl;
    }
}

void trapezoid::P(){
    if(flag == 1){
        float p = a + b + c + d;
        std::cout << p << endl;
    }
}