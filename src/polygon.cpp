#include "polygon.h"
#include <iostream>;
#include <cmath>
using namespace std;

polygon::polygon(float a, int n){
    this-> a = a;
    this-> n = n;
}



void polygon::is(){
    if(a > 0 && n > 0){
        flag = 1;
    }
    else{
        cout << "the polygon doesnt exsist" << endl;
    }
}

void polygon::S(){
    if(flag == 1){
        float r = a * sinf(pi / n) / 2;
        float s = a * n * r / 2;
        std::cout << s << endl;
    }   
}

void polygon::P(){
    if(flag == 1){
        float p = a * n;
        std::cout << p << endl;
    }
}