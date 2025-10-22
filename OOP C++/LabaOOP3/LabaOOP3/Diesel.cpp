#include "Diesel.h"
Disel::Disel(): Engine()
{
    compression = NULL;
}

Disel::Disel(int _power, int _weight, double _capacity, double _compression): Engine(_power, _weight)
{
    compression = _compression;
}

Disel::~Disel()
{
}

void Disel::setCompression(double _compression)
{
    compression = _compression;
}

double Disel::getCompression()
{
    return compression;
}

string Disel::toString()
{
    string str;
    str += "Power:" + std::to_string(power) + "\n";
    str += "Weight:" + std::to_string(weight) + "\n";
    str += "Compression:" + std::to_string(compression) + "\n";
    return str;
}