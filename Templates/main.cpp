#include <iostream>

using namespace std;

template<typename T>
class Vector {
private:
	T* elem; // elem points to an array of sz elements of type T
	int sz;
public:
	Vector(int s); // constructor: establish invariant, acquire resources
	~Vector() { delete[] elem; } // destructor: release resources

	// ... copy and move operations ...
	
	T& operator[](int i);
	const T& operator[](int i) const;
	int size() const { return sz; }
};

template<typename T>
Vector<T>::Vector(int s)
{
	if (s<0) throw 1;
	elem = new T[s];
	sz = s;
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
	if (i<0 || size()<=i)
		throw out_of_range{"Vector::operator[]"};
	return elem[i];
}

int main(int argc, char **argv)
{
	return 0;
}
