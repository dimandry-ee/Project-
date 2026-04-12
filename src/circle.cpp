#include "circle.h"
#include <iostream>;

using namespace std;
long long float pi = 3,1415926;
circle::circle(int r){
    this-> r = r;
}

void circle:: S(){
    float s = pi * r * r;
    std::cout << s << endl;
}