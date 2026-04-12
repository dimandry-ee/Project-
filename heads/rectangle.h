#pragma once
#include "IFigure2D.h"

class rectangle: IFigure2D{
    float a;
    float b;
public:
    rectangle(float a, float b);
    void S() override;
    void P() override;
}