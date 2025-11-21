#include "objet.hpp"
#include "carre.hpp"
#include <iostream>


using namespace std;


Carre::Carre(double cote) : cote(cote){}

double Carre::getcote()const { return cote; }

void Carre::setcote(double cote) { this->cote = cote; }

double Carre::aire()const { return cote*cote;}

double Carre::perimetre()const { return cote*4;}

void Carre::afiche_info()const {
    cout << "Carre : " 
    << getcote() << " \n"
    << "Périmetre : " 
    << perimetre() << " \n"
    << "Aire : "
    << aire() << " \n"
    << endl;

};