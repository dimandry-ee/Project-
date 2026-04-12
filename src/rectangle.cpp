#include "rectangle.h"
#include <iostream>;
using namespace std;

rectangle::rectangle(float a, float b){
    this-> a = a;
    this-> b = b;
}
bool flag = 0;

void rectangle::is(){
    if(a > 0 && b > 0){
        flag = 1;
    }
    else{
        cout << "the rectangle doesnt exsist" << endl;
    }
}

void rectangle::S(){
    if(flag == 1){
        float s = a * b;
        std::cout << s << endl;
    }   
}

void rectangle::P(){
    if(flag == 1){
        float p = (2 * a) + (2 * b);
        std::cout << p << endl;
    }
}