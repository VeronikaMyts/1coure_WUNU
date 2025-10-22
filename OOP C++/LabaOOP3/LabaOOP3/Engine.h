#pragma once
#include <iostream>
#include <string>

using namespace std;

class Engine
{
protected:
    int power;
    int weight;
public:
    Engine();
    Engine(int,int);
    ~Engine();
    void setPower(int);
    int getPower();
    void setWeight(int);
    int getWeight();
    virtual string toString();
    static int count;
    void add();
    static void print();
};
