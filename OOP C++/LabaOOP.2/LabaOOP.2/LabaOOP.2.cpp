#include "Vector.h"
#include<iostream>
#include <string>
using namespace std;


int main() 
{
    setlocale(LC_ALL, "");
    Vector v1;
    //Встановлення розміру вектора
    v1.setSize();
    //Ведення даних в вектор
    v1.setData();
    //Виведення вектору
    cout<<v1.toString()<<endl;
    //Створення вектора v2 
    Vector v2;
    v2.setSize();
    v2.setData();
    cout<<v2.toString()<<endl;
    //Порівняння векта v1 і v2
    if(v1==v2)
        cout<<"vector 1 == vector 2"<<endl;
    else
        cout<<"vector 1 != vector 2"<<endl;
    //Виклиу і виведення числа під індексом 3 з вектора
    cout<<v1[2]<<endl;
    //Присвоєння всім елементам вектора v1 числа 5.3
    v1=5.3;
    //Виведення вектора
    cout<<v1.toString()<<endl;
    
}
