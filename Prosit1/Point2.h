//A) si on met tout dans le .h il faut importer "Point2.h" dans le main.cpp. g++ main.cpp -o prog | pour une petite classe ca va. 
//B) Si on fait en 2 étapes alors le .h : permet de faire la déclaration de la class


// Version A
/*
#pragma once
#include <iostream>

class Point2 {
private:
    double x, y;
public:
    Point2(): x(0), y(0) {}
    Point2(double x, double y): x(x), y(y) {}

    double getX() { 
        return x; 
    }

    double getY() { 
        return y; 
    }

    void setX(double x) { 
        this->x = x; 
    }

    void setY(double y) { 
        this->y = y; 
    }

    Point2 add_Point(Point2 pt) {
        return Point2(this->x + pt.x, this->y + pt.y);
    }

    void affichage() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
*/


//Version B
// g++ main.cpp Point2.cpp -o programme

#pragma once

class Point2 {
private:
    double x, y;
public:
    Point2();
    Point2(double x, double y);
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    Point2 add_Point(Point2 pt);
    void affichage();
};

