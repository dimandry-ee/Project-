#pragma once
#include "IFigure2D.h"

class circle: IFigure2D{
    float pi = 3.1415926;
    bool flag = 0;
    float r;
public:
    circle(float r);
    void S() override;
    void P() override;
    void is() override;
};
