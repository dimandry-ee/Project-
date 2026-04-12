#include "triangle.h"
#include <iostream>;
#include <cmath>
using namespace std;


triangle::triangle(float a, float b, float c){
    this-> a = a;
    this-> b = b;
    this-> c = c;
}
polp = (a + b + c) / 2;

void triangle:: S(){
    float s = pow(polp * (polp - a) * (polp - b) * (polp - c), 1.0, 2.0);
    std::cout << s << endl;
}

void triangle::P(){
    float p = a + b + c;
    std::cout << p << endl;
}