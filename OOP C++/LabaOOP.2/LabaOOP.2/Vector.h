#pragma once
#include<algorithm>
#include <string>
#include <vector>
class Vector
{
private:
    double* data;
    int size;
public:
    Vector();
    Vector(int size);
    Vector(const Vector& other);
    ~Vector();
    void setSize();
    void setData();
    std::string toString();
    void operator=(double num);
    double& operator[](int index);
    bool operator==(const Vector& other);
};
