#include <iostream>

using namespace std;

template<typename T, typename U>
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
	
	T& SomeFunc();
};

template<typename T, typename U>
Vector<T,U>::Vector(int s)
{
	if (s<0) throw 1;
	elem = new T[s];
	sz = s;
}

template<typename T, typename U>
const T& Vector<T,U>::operator[](int i) const
{
	if (i<0 || size()<=i)
		throw out_of_range{"Vector::operator[]"};
	return elem[i];
}

template<typename T,typename U>
T& Vector<T,U>::SomeFunc()
{
	T t;
	return t;
}

int main(int argc, char **argv)
{
	return 0;
}
