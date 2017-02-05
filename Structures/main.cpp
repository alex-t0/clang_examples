#include <iostream>

struct Empty {};
struct Base { int a; };
struct Derived : Base { int b; };
struct Bit { unsigned bit: 1; };

struct Vector
{
	int size;
	double* elements;
};

void vector_init(Vector &v, int s)
{
	v.elements = new double[s];
	v.size = s;
}

void f(Vector v, Vector& rv, Vector* pv)
{
	int i1 = v.size;   // access through name
	int i2 = rv.size;  // access through reference
	int i4 = pv->size; // access through pointer
}

int main(int argc, char **argv)
{
	Vector v1;
	vector_init(v1, 10);
	std::cout << "sizeof(v1) = " << sizeof v1 << std::endl;
	
	std::cout << "=========================" << std::endl;
	
	Empty e;
    Derived d;
    Base& b = d;
	Base b1;
    Bit bit;
    int a[10];
	std::cout 	<< "size of empty class: "              << sizeof e          << '\n'
				<< "size of pointer to empty class: "   << sizeof &e         << '\n'
//            << "size of function: "                 << sizeof(void())    << '\n'  // error
//            << "size of incomplete type: "          << sizeof(int[])     << '\n'  // error
//            << "size of bit field: "                << sizeof bit.bit    << '\n'  // error
				<< "size of array of 10 int: "          << sizeof(int[10])   << '\n'
				<< "size of array of 10 int (2): "      << sizeof a          << '\n'
				<< "length of array of 10 int: "        << ((sizeof a) / (sizeof *a)) << '\n'
				<< "length of array of 10 int (2): "    << ((sizeof a) / (sizeof a[0])) << '\n'
				<< "size of the Derived: "              << sizeof d          << '\n'
				<< "size of the Derived through Base: " << sizeof b          << '\n'
				<< "simple base size: " 				<< sizeof b1		 << '\n'
				<< "sizeof bit class: "					<< sizeof bit		 << '\n'
				/*<< "sizeof bit.bit : "					<< sizeof(bit.bit)	 << '\n'*/;
	
	return 0;
}
