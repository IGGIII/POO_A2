#pragma once
#include "Polygone.hpp"

namespace Geo {

class Carre : public Polygone {
public:
    Carre(const Point& p1, const Point& p2);

    double aire() const override;
};

} // namespace Geo
