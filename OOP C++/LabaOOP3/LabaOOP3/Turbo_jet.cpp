#include "Turbo_jet.h"

Turbo_jet::Turbo_jet(): Engine()
{
    traction = NULL;
}

Turbo_jet::Turbo_jet(int _power, int _weight, int _traction): Engine(_power, _weight)
{
    traction = _traction;
}

Turbo_jet::~Turbo_jet()
{
}

void Turbo_jet::setTraction(int _traction)
{
    traction = _traction;
}

int Turbo_jet::getTraction()
{
    return traction;
}

string Turbo_jet::toString()
{
    string str;
    str += "Power:" + std::to_string(power) + "\n";
    str += "Weight:" + std::to_string(weight) + "\n";
    str += "Traction:" + std::to_string(traction) + "\n";
    return str;
}
