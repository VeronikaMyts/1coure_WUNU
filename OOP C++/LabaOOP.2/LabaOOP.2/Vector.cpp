#include "Vector.h"
#include<iostream>
using namespace std;

Vector::Vector()
{
    data = nullptr;
    size = 0;
}

Vector::Vector(int size)
{
    size = size;
    data = new double[size];
}

Vector::~Vector()
{
    delete[] data;
}

void Vector::setSize()
{
    cout<<"�����i�� ������ ����i��:";
    cin>>size;
    data=new double[size];
}

void Vector::setData()
{
    if(size<=0)
        cout<<"�������";
    for(int i=0;i<size;i++)
    {
        cout<<"�����i�� �����:";
        cin>>data[i];
    }
}

string Vector::toString()
{
    string str;
    for(int i=0;i<size;i++)
    {
        str+=to_string(data[i])+" ";
    }
    return str;
}

void Vector::operator=(double num)
{
    for(int i=0;i<size;i++)
    {
        data[i]=num;
    }
}
double& Vector::operator[](int index)
{
    if (index < 0 || index >= size)
    {
        cerr << "I����� �������" << endl;
        exit(1);
    }
    return data[index];
}

bool Vector::operator==(const Vector& other)
{
    if (size != other.size)
        return false;
    for (int i = 0; i < size; i++)
        if (data[i] != other.data[i])
            return false;
    return true;
}
 