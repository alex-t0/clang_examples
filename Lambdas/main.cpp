#include <iostream>

template <class>
class myfunc;

int main(int argc, char **argv)
{
	int x = 11;
	// bool (int t) func;
	// myfunc func = [&](int a){ return a<x; };
	auto f1 = [&]()mutable{ x = -1; };
	auto f2 = [=]()mutable{ x = -1; };
	// bool b = [&](int a){ return a<x; }(10);
	f2();
	std::cout << "(f2) x = " << x << std::endl;
	f1();
	std::cout << "(f1) x = " << x << std::endl;
	return 0;
}
