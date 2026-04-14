#include <iostream>
#include "factory3.cpp"
#include "factory2.cpp"
using namespace std;

int main(){
    Factory2 f2;
    Factory3 f3;
    auto c = f3.create(figure3::spher);
    c(5);
    c.V();
}