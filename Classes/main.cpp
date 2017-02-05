#include <iostream>

class SomeVector 
{
public:
	SomeVector(int vector_size) : elements {new double[vector_size]}, size{vector_size} 
	{
		// std::cout << "Hello from constructor" << std::endl;
	}
	~SomeVector()
	{
		std::cout << "Hello from destructor" << std::endl;
		delete[] elements;
	}
	double& operator[](int i) { return elements[i]; }
	int get_size() { return size; }
private:
	double* elements;
	int size;
};

int main(int argc, char **argv)
{
	SomeVector sv(100);
	// sv.size = 500;
	
	std::cout << "Hello from code" << std::endl;
	
	return 0;
}
