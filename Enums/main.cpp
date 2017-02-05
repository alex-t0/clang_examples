#include <iostream>

enum class Color { red, blue, green };
enum class TrafficLight { green, yellow, red };

int main(int argc, char **argv)
{
	Color c = Color::blue;
	TrafficLight l = TrafficLight::yellow;
	
	// l = c;
	
	int i = (int)Color::blue;
	
	std::cout << "i = " << i << std::endl;
	
	TrafficLight l1 = (TrafficLight) i;
	if (l1 == TrafficLight::yellow)
		std::cout << "l1 is yellow" << std::endl;
	else
		std::cout << "l1 is not yellow" << std::endl;
	
	return 0;
}
