#pragma once
#include "IFigure3D.h"

class cube: IFigure3D{
    float a = 0;
    int flag = 0;
public:
    cube(float a);
    void S() override;
    void V() override;
    void is() override;
};