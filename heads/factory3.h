#pragma once
#include <memory>
#include <iostream>

using namespace std;

enum class figure3 {spher, cube};

class Factory3{
public:
    std::unique_ptr<IFigure3D> create(figure3 a);
};