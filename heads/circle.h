#pragma once
#include "IFigure2D.h"

class circle: IFigure2D{
    int r;
public:
    circle(int r);
    void S() override;
}

