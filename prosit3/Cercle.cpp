#include "Cercle.hpp"
#include <cmath>

namespace Geo {

Cercle::Cercle(const Point& c, double r) : centre(c), rayon(r) {}

double Cercle::getRayon() const { return rayon; }
Point Cercle::getCentre() const { return centre; }

void Cercle::setCentre(const Point& c) { centre = c; }
void Cercle::setRayon(double r) { rayon = r; }

double Cercle::aire() const { return M_PI * rayon * rayon; }
double Cercle::perimetre() const { return 2 * M_PI * rayon; }

} // namespace Geo
