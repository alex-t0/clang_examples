#include <iostream>
#include "Vector.h" // get the interface

Vector::Vector(int s) : elem{new double[s]}, sz{s}
{
}

double& Vector::operator[](int i)
{
	return elem[i];
}

int Vector::size()
{
	// std::cout << "hello from Vector::size()" << std::endl;
	return sz;
}