#pragma once
#include<iostream>

using namespace std;

class IFigure2D{
public:
  virtual void area() = 0;
  virtual void perimeter() = 0;
};
