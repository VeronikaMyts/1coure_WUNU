#pragma once
#include "Engine.h"
class Disel : public Engine
{
    double compression;
public:
    Disel();
    Disel(int _power, int _weight, double _capacity, double _compression);
    ~Disel();
    void setCompression(double);
    double getCompression();
    string toString() override;
};
