#pragma once
#include "Forme.hpp"
#include "point.hpp"
#include <vector>

namespace Geo {

class Polygone : public Forme {
protected:
    std::vector<Point> sommets;

public:
    Polygone(const std::vector<Point>& pts);

    std::vector<Point> getSommets() const;

    virtual double aire() const override = 0;
    virtual double perimetre() const override;
};

} // namespace Geo
