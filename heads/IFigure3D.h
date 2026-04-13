#pragma once
#include<iostream>

using namespace std;

class IFigure3D{
public:
    virtual void V() = 0;
    virtual void S() = 0;
    virtual void is() = 0; //это функция, которая проверяет существует ли фигура, чтобы не было отрицательных значений
};