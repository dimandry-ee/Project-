#include "rectangle.h"
#include <iostream>;
using namespace std;

rectangle::rectangle(float a, float b){
    this-> a = a;
    this-> b = b;
}

void rectangle:: S(){
    float s = a * b;
    std::cout << s << endl;
}

void rectangle::P(){
    float p = (2 * a) + (2 * b);
    std::cout << p << endl;
}