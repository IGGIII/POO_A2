#include <iostream>
#include "Cercle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"

int main() {
    Geo::Cercle c({0,0}, 5);
    std::cout << "Cercle - Aire: " << c.aire() << ", Perimetre: " << c.perimetre() << "\n";

    Geo::Triangle t({0,0}, {4,0}, {0,3});
    std::cout << "Triangle - Aire: " << t.aire() << ", Perimetre: " << t.perimetre() << "\n";

    Geo::Rectangle r({0,0}, {4,0}, 4, 3);
    std::cout << "Rectangle - Aire: " << r.aire() << ", Perimetre: " << r.perimetre() << "\n";

    Geo::Carre car({0,0}, {2,0});
    std::cout << "Carre - Aire: " << car.aire() << ", Perimetre: " << car.perimetre() << "\n";

    return 0;
}
