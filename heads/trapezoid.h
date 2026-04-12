#pragma once
#include "IFigure2D.h"

class trapezoid: IFigure2D{
    float a;
    float b;
    float c;
    float d;
    float h;
public:
    trapezoid(float a, float b, float c, float d, float h);
    void S() override;
    void P() override;
    void is() override;
}