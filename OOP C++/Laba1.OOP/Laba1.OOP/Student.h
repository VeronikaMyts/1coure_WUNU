#pragma once  
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int course;
	int gender;
public:
	Student();
	Student(string,int,int);
	Student(const Student&);
	void setName(string);
	string getName();
	void setCourse(int);
	int getCourse();
	void setGender(int);
	int getGender();
	string toString();
	~Student();
	

};

