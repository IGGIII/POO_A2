#pragma once
#include "Polygone.hpp"
#include "point.hpp"

namespace Geo {

class Rectangle : public Polygone {
public:
    Rectangle(const Point& p1, const Point& p2, double largeur, double hauteur);

    double aire() const override;
};

} // namespace Geo
