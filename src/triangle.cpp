#include "triangle.h"
#include <iostream>;
#include <cmath>
using namespace std;

triangle::triangle(float a, float b, float c){
    this-> a = a;
    this-> b = b;
    this-> c = c;
}


void triangle::is(){
    if ( (a < (b + c) && b < (a + c) && c < (a + b)) && (a > 0 && b > 0 && c > 0) ){
        flag = 1;
    }
    else{
        cout << "the triangle doesnt exist" << endl;
    }
}

void triangle::S(){
    if(flag == 1){ 
        float polp = (a + b + c) / 2;
        float s = pow(polp * (polp - a) * (polp - b) * (polp - c), 0.5);
        std::cout << s << endl;  
    }
}

void triangle::P(){
    if(flag == 1){
        float p = a + b + c;
    std::cout << p << endl;
    } 
}