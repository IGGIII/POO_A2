#include "Vector2.h"
#include <iostream>
using namespace std;
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}

float Vector2::getX() { return x; }
float Vector2::getY() { return y; }
void Vector2::setX(float newX) { x = newX; }
void Vector2::setY(float newY) { y = newY; }


float Vector2::norm(){
    return sqrt(this->x*this->x + this->y*this->y);
}

float Vector2::dot(Vector2 vec){
    return this->x * vec.getX() + this->y * vec.getY();
}


Vector2 Vector2::dot_scalar(float u){
    Vector2 res = Vector2(u*this->x, u*this->y);
    return res;
}

float Vector2::cross(Vector2 vec){
    return ((this->x*this->y)-(vec.getX()*vec.getY()));
}

Vector2 Vector2::negate(){
    Vector2 res(-x,-y);
    return res;
}





