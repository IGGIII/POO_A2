#pragma once
#include "Polygone.hpp"
#include "point.hpp"

namespace Geo {

class Triangle : public Polygone {
public:
    Triangle(const Point& a, const Point& b, const Point& c);
    double aire() const override;
};

} // namespace Geo
