#pragma once
#include "IFigure3D.h"

class sphere: IFigure3D{
    float pi = 3.1415926;
    float r = 0;
    int flag = 0;
public:
    sphere(float r);
    void S() override;
    void V() override;
    void is() override;
};