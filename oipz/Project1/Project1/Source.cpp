#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
	int  a, b, c;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	float P;
	P = (a + b + c) / 2.;
	if (( a + b > c)|| 
		(a + c > b) ||
		(c + b > a)) ;
	     cout << "Трикутник прямокутний";

	cout << "P:" << P;
	

	

	
}