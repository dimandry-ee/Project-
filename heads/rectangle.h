#pragma once
#include "IFigure2D.h"

class rectangle: IFigure2D{
    bool flag = 0;
    float a;
    float b;
public:
    rectangle(float a, float b);
    void S() override;
    void P() override;
    void is() override;
};