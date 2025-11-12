//A) tout en un fichier  : pour des tests rapides
// tout faire dans le .cpp est une mauvaise pratique, apparement c
// a copie le contenu entier du .cpp dans ton fichier, ce qui marche mais duplique les symboles si tu as plusieurs fichiers qui incluent le même .cpp → erreurs de redefinition.
//B) en deux fichiers : alors le .cpp contient les définitions des méthodes / Pr les gros projets



//version A :
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



//version B
//g++ main.cpp Point2.cpp -o programme

#include "Point2.h"
#include <iostream>

Point2::Point2() : x(0), y(0) {}
Point2::Point2(double x, double y) : x(x), y(y) {}

double Point2::getX() { return x; }
double Point2::getY() { return y; }



void Point2::setX(double x) { 
    this->x = x; 
}

void Point2::setY(double y) { 
    this->y = y; 
}

Point2 Point2::add_Point(Point2 pt) { 
    return Point2(x + pt.x, y + pt.y); 
}


void Point2::affichage() { 
    std::cout << "(" << x << ", " << y << ")" << std::endl; 
}






