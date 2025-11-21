#include "point.hpp"
#include <cmath>

namespace Geo {

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::setX(double xVal) { x = xVal; }
void Point::setY(double yVal) { y = yVal; }

double Point::distance(const Point& other) const {
    double dx = x - other.getX();
    double dy = y - other.getY();
    return std::sqrt(dx*dx + dy*dy);
}

} // namespace Geo
