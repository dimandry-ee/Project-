#include "polygon.h"
#include <iostream>;
using namespace std;

polygon::polygon(float a, float r, int n){
    this-> a = a;
    this-> r = r;
    this-> n = n;
}
bool flag = 0;

void polygon::is(){
    if(a > 0 && r > 0 && n > 0){
        flag = 1;
    }
    else{
        cout << "the polygon doesnt exsist" << endl;
    }
}

void polygon::S(){
    if(flag == 1){
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