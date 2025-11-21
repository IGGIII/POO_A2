#include "Polygone.hpp"
#include <cmath>

namespace Geo {

Polygone::Polygone(const std::vector<Point>& pts) : sommets(pts) {}

std::vector<Point> Polygone::getSommets() const { return sommets; }

double Polygone::perimetre() const {
    double p = 0.0;
    for (size_t i = 0; i < sommets.size(); i++) {
        p += sommets[i].distance(sommets[(i+1)%sommets.size()]);
    }
    return p;
}

} // namespace Geo
