#pragma once
#include "IFigure2D.h"

class polygon: public IFigure2D{
    float pi = 3.1415926;
    bool flag = 0;
    float a;
    int n;
public:
    polygon(float a, int n);
    void S() override;
    void P() override;
    void is() override;
};