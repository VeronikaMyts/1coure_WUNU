#pragma once
template<typename T,int size=5> 
class Vector
{
private:
	T* data;
	int size_vector;
public:
	Vector();
	~Vector();
	int get_size_vector() const;
	void operator =(T item);
	T& operator [](size_t index);
	bool operator ==(const Vector& right);
};

template<typename T, int size>
inline Vector<T, size>::Vector():data(new T[size]),size_vector(size){} //виділяє динамічну пом'ять для класу

template<typename T, int size>
inline Vector<T, size>::~Vector()
{
	delete[]data;
}

template<typename T, int size>
inline int Vector<T, size>::get_size_vector() const //повертає розмір вектора
{
	return size_vector;
}

template<typename T, int size>
inline void Vector<T, size>::operator=(T item)
{
	for (size_t i = 0; i < size_vector; i++)
	{
		data[i] = item;
	}
}

template<typename T, int size>
inline T& Vector<T, size>::operator[](size_t index)
{
	return data[index];
}

template<typename T, int size>
inline bool Vector<T, size>::operator==(const Vector& right)
{
	if (size_vector != right.size_vector)
		return false;
	else {
		for (size_t i = 0; i < size_vector; i++)
		{
			if (data[i] != right.data[i])
				return false;
		}
		return true;
	}
}
