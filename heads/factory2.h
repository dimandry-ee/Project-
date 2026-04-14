#pragma once
#include <memory>
#include <iostream>
#include "circle.cpp"
#include "triangle.cpp"
#include "trapezoid.cpp"
#include "polygon.cpp"
#include "rectangle.cpp"
// #include "sphere.cpp"
// #include "cube.cpp"
using namespace std;

enum class figure2 {cir, tri, trap, polyg, rectan};

class Factory2{
public:
    std::unique_ptr<IFigure2D> create(figure2 a);
};