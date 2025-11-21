#pragma once

namespace Geo {

class Forme {
public:
    virtual double aire() const = 0;
    virtual double perimetre() const = 0;
    virtual ~Forme() {}
};

} // namespace Geo

