#include "InternalCombustionEngine.h"

InternalCombustionEngine::InternalCombustionEngine(): Engine()
{
    capacity = NULL;
}

InternalCombustionEngine::InternalCombustionEngine(int _power, int _weight, double _capacity): Engine(_power, _weight)
{
    capacity = _capacity;
}

InternalCombustionEngine::~InternalCombustionEngine()
{
}

void InternalCombustionEngine::setCapacity(double _capacity)
{
    capacity = _capacity;
}

int InternalCombustionEngine::getCapacity()
{
    return capacity;
}

string InternalCombustionEngine::toString()
{
    string str;
    str += "Power:" + std::to_string(power) + "\n";
    str += "Weight:" + std::to_string(weight) + "\n";
    str += "Capacity:" + std::to_string(capacity) + "\n";
    return str;
}
