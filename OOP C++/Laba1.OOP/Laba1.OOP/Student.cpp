#include "Student.h"
#include <iostream>

using namespace std;
Student::Student()
{
	cout <<"Constructor without parameters was called" << endl;

}

Student::Student(const Student& ref)
{
	cout << "Constructor of copying was called" << endl;
	this->name = ref.name;
	this->course = ref.course;
	this->gender = ref.gender;
}

void Student::setName(string name)
{
	this->name = name;
}
void Student::setCourse(int course)
{
	this->course =course;
}
void Student::setGender(int gender)
{
	this->gender = gender;
}

string Student::getName()
{
	return name;
}
int Student::getCourse()
{
	return course;
}
int Student::getGender()
{
	return gender;
}
string Student::toString()
{
	string genderr;
	if (gender == 1)
	{
		genderr = "man";
		cout << "man" << endl;
	}
	else
	{
		genderr = "woman";
		cout << "woman" << endl;
	}
	string Student = "name:" + name + "\ncourse:" + to_string(course) + "\ngender:" + genderr;
	return Student;
	
}
Student::~Student()
{
	cout << "Destructor has called" << endl;
};