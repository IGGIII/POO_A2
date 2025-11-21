#include "objet.hpp"
#include "rectangle.hpp"
#include <iostream>


using namespace std;


Rectangle::Rectangle(double largeur, double longueur) : largeur(largeur), longueur(longueur) {}

double Rectangle::getlargeur()const { return largeur; }
double Rectangle::getlongueur()const { return longueur; }

void Rectangle::setlargeur(double x) { this->largeur = largeur; }
void Rectangle::setlongueur(double y) { this->longueur = longueur; }

double Rectangle::aire()const { return longueur*largeur;}

double Rectangle::perimetre()const { return (longueur+largeur)*2;}

void Rectangle::afiche_info()const {
    cout << "Longueur : " 
    << getlongueur() << " \n"
    << "Largeur : " 
    << getlargeur() << " \n"
    << "Périmetre : " 
    << perimetre() << " \n"
    << "Aire : "
    << aire() << " \n"
    << endl;

};