#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string name;
	int course;
	int gender;
	cout << "Enter name:" << endl;
	cin >> name;
	cout << "Enter course:" << endl;
	cin >> course;
	cout << "Enter gender(0-woman;1-man)  :" << endl;
	cin >> gender;


	Student st1;
	
	st1.setName(name);
	st1.setCourse(course);
	st1.setGender(gender);
	
	cout << st1.getName() << endl;
	cout << st1.getCourse() << endl;
	cout << st1.getGender() << endl;
	cout << st1.toString() << endl;

}
