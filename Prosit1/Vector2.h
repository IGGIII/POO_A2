#pragma once

#include <iostream>
#include <math.h>



class Vector2 {
private:
  float x, y;
public:
    Vector2();
    Vector2(float x, float y);
    float getX();
    float getY();
    void setX(float nouveauX);//pas obligé
    void setY(float nouveauY);
    float norm();
    float dot(Vector2 v);
    Vector2 dot_scalar(float u);
    float cross(Vector2 v);
    Vector2 negate();
};


