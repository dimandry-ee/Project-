#pragma once
#include <memory>
#include <iostream>
#include "cube.cpp"
#include "sphere.cpp"
using namespace std;

enum class figure3 {sher, cube};

class Factory2{
public:
    std::unique_ptr<IFigure3D> create(figure3 a);
};