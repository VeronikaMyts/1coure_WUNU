#include "Vector.h"
#include <iostream>
using namespace std;
int main()
{
	Vector<double,10> vector_1;
	vector_1 = 4.3;
	for (size_t i = 0; i < vector_1.get_size_vector(); i++)
	{
		cout << vector_1[i]<<endl;
	}
	Vector<double,10> vector_2;
	vector_2 = 4;
	for (size_t i = 0; i < vector_2.get_size_vector(); i++)
	{
		cout << vector_2[i]<<endl;
	}
	const bool res = vector_1 == vector_2;
	cout << "vector_1=vector_2:" << res << endl;
}
