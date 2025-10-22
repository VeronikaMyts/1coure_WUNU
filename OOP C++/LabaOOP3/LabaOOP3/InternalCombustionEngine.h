#pragma once
#include "Engine.h"
class InternalCombustionEngine : public Engine
{
protected:
    double capacity;
public:
    InternalCombustionEngine();
    InternalCombustionEngine(int, int, double);
    ~InternalCombustionEngine();
    void setCapacity(double);
    int getCapacity();
    virtual string toString() override;
};
