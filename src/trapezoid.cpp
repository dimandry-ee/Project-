#include "trapezoid.h"
#include <iostream>;
#include <cmath>
using namespace std;

trapezoid::trapezoid(float a, float b, float c, float d, float h){
    this-> a = a;
    this-> b = b;
    this-> c = c;
    this-> d = d;
}

void trapezoid:: S(){
    float s = h * (a + b) / 2;
    std::cout << s << endl;
}

void trapezoid::P(){
    float p = a + b + c + d;
    std::cout << p << endl;
}