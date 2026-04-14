#pragma once
#include <memory>
#include <iostream>
#include "circle.h"
#include "triangle.h"
#include "trapezoid.h"
#include "polygon.h"
#include "rectangle.h"
// #include "sphere.cpp"
// #include "cube.cpp"
using namespace std;

enum class figure2 {cir, tri, trap, polyg, rectan};

class Factory2{
public:
    std::unique_ptr<IFigure2D> create(figure2 a);
};