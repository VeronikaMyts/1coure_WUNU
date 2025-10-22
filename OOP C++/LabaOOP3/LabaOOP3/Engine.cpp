#include <iostream>
#include "Engine.h"
Engine ** engines=new Engine * [10];
int Engine::count=-1;
Engine::Engine()
{
    power = NULL;
    weight = NULL;
    ++count;
}

Engine::Engine(int _power, int _weight)
{
    power = _power;
    weight = _weight;
    ++count;
}

Engine::~Engine(){}

void Engine::setPower(int _power)
{
    power = _power;
}

int Engine::getPower()
{
    return power;
}

void Engine::setWeight(int _weight)
{
    weight = _weight;
}

int Engine::getWeight()
{
    return weight;
}

string Engine::toString()
{
    string str;
    str += "Power:" + std::to_string(power) + "\n";
    str += "Weight:" + std::to_string(weight) + "\n";
    return str;
}
void Engine::add()
{
    ::engines[count] = this;
}

void Engine::print()
{
    for (int i = 0; i <= Engine::count; i++)
        if (engines[i] != nullptr)
            cout<<engines[i]->toString();
}
