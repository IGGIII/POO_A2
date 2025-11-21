#pragma once

class objet {
public:
    virtual double aire() const = 0;
    virtual double perimetre() const = 0;
    virtual void afiche_info() const = 0;
};