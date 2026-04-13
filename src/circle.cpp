#include "circle.h"
#include <iostream>;
using namespace std;

float pi = 3,1415926;
bool flag = 0;

circle::circle(float r){
    this-> r = r;
}

void circle::is(){
    if(r > 0){
        flag = 1;
    }
    else{
        cout << "the circle doesnt exsist" << endl;
    }
}

void circle::S(){
    if(flag == 1){
        float s = pi * r * r;
        std::cout << s << endl;
    }   
}

void circle::P(){
    if(flag == 1){
        float p = pi * 2 * r;
        std::cout << p << endl;
    }
}