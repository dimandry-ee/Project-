#include "circle.h"
#include <iostream>;
using namespace std;

long long float pi = 3,1415926;
circle::circle(float r){
    this-> r = r;
}

void circle:: S(){
    float s = pi * r * r;
    std::cout << s << endl;
}

void circle::P(){
    float p = pi * 2 * r;
    std::cout << p << endl;
}