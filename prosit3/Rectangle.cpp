#include "Rectangle.hpp"
#include <cmath>

namespace Geo {

Rectangle::Rectangle(const Point& p1, const Point& p2, double largeur, double hauteur)
    : Polygone({})
{
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    double longueur = std::sqrt(dx*dx + dy*dy);
    double ux = dx / longueur;
    double uy = dy / longueur;

    sommets.push_back(p1);
    sommets.push_back(p2);
    sommets.push_back(Point(p2.getX() - uy*hauteur, p2.getY() + ux*hauteur));
    sommets.push_back(Point(p1.getX() - uy*hauteur, p1.getY() + ux*hauteur));
}

double Rectangle::aire() const {
    double largeur = sommets[0].distance(sommets[3]);
    double longueur = sommets[0].distance(sommets[1]);
    return largeur * longueur;
}

} // namespace Geo
