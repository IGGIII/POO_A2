#include "objet.hpp"
#include <iostream>

#pragma once

class Carre : public objet {
    private :
        double cote;
    public:
        Carre(double cote = 1);
        double getcote()const;

        void setcote(double cote);

        double aire()const override;
        double perimetre()const override;
        void afiche_info()const override;
};