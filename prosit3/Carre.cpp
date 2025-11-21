#include "Carre.hpp"
#include <cmath>

namespace Geo {

Carre::Carre(const Point& p1, const Point& p2) : Polygone({})
{
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    double longueur = std::sqrt(dx*dx + dy*dy);
    double ux = dx / longueur;
    double uy = dy / longueur;

    double cote = longueur;

    sommets.push_back(p1);
    sommets.push_back(p2);
    sommets.push_back(Point(p2.getX() - uy*cote, p2.getY() + ux*cote));
    sommets.push_back(Point(p1.getX() - uy*cote, p1.getY() + ux*cote));
}

double Carre::aire() const {
    double cote = sommets[0].distance(sommets[1]);
    return cote * cote;
}

} // namespace Geo