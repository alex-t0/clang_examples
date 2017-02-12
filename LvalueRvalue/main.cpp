#include <iostream>

std::string f()
{
	return "";
}

int main(int argc, char **argv)
{
	std::string var { "test str here" };
	// std::string f();
	
	std::string& r1 { var };
	var += " aaa";
	std::cout << "r1=" << var << std::endl;
	
	// std::string s2 = f();
	
	// std::string& r2 {f()}; // rvalue to lvalue
	std::string&& rval1 { f() };
	
	// std::string& r3 {"ololo"};
	std::string rval3 {"ololol"};
	
	// std::string&& rval2 { var }; // lvalue to rvalue
	
	return 0;
}
