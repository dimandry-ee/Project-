#pragma once
#include "IFigure2D.h"

class triangle: IFigure2D{
    float a;
    float b;
    float c;
public:
    triangle(float a, float b, float c);
    void S() override;
    void P() override;
    void is() override;
}