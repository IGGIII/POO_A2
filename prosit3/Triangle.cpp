#include "Triangle.hpp"
#include <cmath>

namespace Geo {

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
    : Polygone({a, b, c}) {}

double Triangle::aire() const {
    double a = sommets[0].distance(sommets[1]);
    double b = sommets[1].distance(sommets[2]);
    double c = sommets[2].distance(sommets[0]);
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s-a) * (s-b) * (s-c));
}

} // namespace Geo
