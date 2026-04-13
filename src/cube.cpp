#include "cube.h"

cube::cube(float a){
    this->a = a;
}

void cube::is(){
    if(a > 0){
        flag = 1;
    }
    else{
        cout << "the cube doesnt exsist" << endl;
    }
}

void cube::S(){
    float s = a * a * 6;
    cout << s << "/n";
}

void cube::V(){
    float v = a * a * a;
    cout << v << "/n";
}