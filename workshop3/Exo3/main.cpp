#include "objet.hpp"
#include "rectangle.hpp"
#include "carre.hpp"
#include <iostream>

int main(){
    Rectangle r(1.0,5.0);
    r.afiche_info();

    Rectangle r1(5);
    r1.afiche_info();

    objet* r2= new Rectangle(2,3);
    r2->afiche_info();
    delete r2;

    Carre c(8);
    c.afiche_info();

}