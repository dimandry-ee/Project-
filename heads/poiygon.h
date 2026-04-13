#pragma once
#include "IFigure2D.h"

class polygon: IFigure2D{
    float a;
    int n;
public:
    polygon(float a, int n);
    void S() override;
    void P() override;
    void is() override;
};