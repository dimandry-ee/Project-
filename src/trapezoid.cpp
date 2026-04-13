#include "trapezoid.h"
#include <iostream>;
#include<cmath>
using namespace std;

trapezoid::trapezoid(float a, float b, float c, float d){
    this-> a = a;
    this-> b = b;
    this-> c = c;
    this-> d = d;
}

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
        float x = abs(a * b / (d - b)) + a;
        float y = abs(c * b / (d - b)) + c;
        float cos = (x * x + d * d - y * y) / 2 / x / d;
        float sin = pow(1 - cos * cos, 0.5);
        float h = a * sin;
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