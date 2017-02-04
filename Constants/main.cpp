#include <iostream>
#include <time.h>
#include <stdlib.h>

int rand_func()
{
	srand(time(NULL));
	return rand();
}

constexpr int square(int x)
{
	return x*x;
}

int method_with_const_param(const int p1, int p2)
{
	p2 = 10;
	// p1 = 42;
	return 0;
}

int main(int argc, char **argv)
{
	const auto a = 100*26;
	constexpr auto e = 55 * 118;
	
	const auto c1 = rand_func();
	// constexpr auto c2 = square(rand_func());
	constexpr auto c3 = square(a);
	
	return 0;
}
