#include <iostream>
#include "factory3.cpp"
#include "factory2.cpp"
using namespace std;

int main(){
    factory2 f2;
    factory3 f3;
    auto c = f3.create(figure3 1)(5);
    c.V();
}