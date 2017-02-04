#include <iostream>

int main(int argc, char **argv)
{
	for (auto x : {1,2,3,4,5})
		std::cout << x << " "; // x copied from auto initialized array
	
	std::cout << ":)" << std::endl;
	
	for (auto &x : {5,4,3,2,1})
		std::cout << x << " "; // x copied from auto initialized array
	
	std::cout << ":)" << std::endl;
	
	return 0;
}
