#pragma once
#include "IFigure2D.h"

class trapezoid: IFigure2D{
    bool flag = 0;
    float a;
    float b;
    float c;
    float d;
public:
    trapezoid(float a, float b, float c, float d);
    void S() override;
    void P() override;
    void is() override;
};