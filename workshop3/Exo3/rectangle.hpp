#include "objet.hpp"
#include <iostream>

#pragma once

class Rectangle : public objet {
    private :
        double largeur, longueur;
    public:
        Rectangle(double largeur = 1,double longueur = 1);
        double getlargeur()const;
        double getlongueur()const;

        void setlargeur(double largeur);
        void setlongueur(double longueur);

        double aire()const override;
        double perimetre()const override;
        void afiche_info()const override;
};