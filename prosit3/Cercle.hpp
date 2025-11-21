#pragma once
#include "Forme.hpp"
#include "point.hpp"

namespace Geo {

class Cercle : public Forme {
private:
    Point centre;
    double rayon;

public:
    Cercle(const Point& c, double r);

    double getRayon() const;
    Point getCentre() const;

    void setCentre(const Point& c);
    void setRayon(double r);

    double aire() const override;
    double perimetre() const override;
};

} // namespace Geo
