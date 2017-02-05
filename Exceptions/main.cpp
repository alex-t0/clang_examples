#include <iostream>

void throw_exception()
{
	throw 1;
}

int main(int argc, char **argv)
{
	try
	{
		throw_exception();
	}
	catch (int exc)
	{
		std::cout << exc << " catched" << std::endl;
	}
	return 0;
}
