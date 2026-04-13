#include "sphere.h"

sphere::sphere(float r){
    this->r = r;
}

void sphere::is(){
    if(r > 0){
        flag = 1;
    }
    else{
        cout << "the cube doesnt exsist" << endl;
    }
}

void sphere::S(){
    float s =  r * r * 4 * pi;
    cout << s << "/n";
}

void sphere::V(){
    float v = r * r * r * 3 * pi / 4;
    cout << v << "/n";
}