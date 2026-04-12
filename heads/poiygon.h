#pragma once
#include "IFigure2D.h"

class polygon: IFigure2D{
    float a;
    float r;
    int n;
public:
    polygon(float a, float r, int n);
    void S() override;
    void P() override;
    void is() override;
}