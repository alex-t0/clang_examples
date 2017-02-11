#include <iostream>
#include <memory>

class ScopeChecker
{
public:
	ScopeChecker() : ScopeChecker(nullptr) { }
	ScopeChecker(char *p)
	{
		if (p != nullptr)
			this->instance = p;
		
		saved_counter = ScopeChecker::counter;
		if (this->instance == nullptr)
			std::cout << "Hello from constructor(" << saved_counter << ")" << std::endl;
		else
			std::cout << "Hello from constructor(" << this->instance << ")" << std::endl;
			
		ScopeChecker::counter++;
	}
	~ScopeChecker()
	{
		if (instance == nullptr)
			std::cout << "Hello from destructor(" << saved_counter << ")" << std::endl;
		else
			std::cout << "Hello from destructor(" << instance << ")" << std::endl;
		
		//if (instance != nullptr)
		//	delete[] instance;
	}
	
	void do_some_custom_action()
	{
		if (instance == nullptr)
			std::cout << "Hello from custom action(" << saved_counter << ")" << std::endl;
		else
			std::cout << "Hello from custom action(" << instance << ")" << std::endl;
	}
private:
	int saved_counter = 0;
	char *instance = nullptr;
	static int counter;
};

int ScopeChecker::counter = 0;

int some_test_func()
{
	int x = 16;
	return x << 2;
};

int main(int argc, char **argv)
{
	ScopeChecker sc, sc1;
	// ScopeChecker::initialized = false;
	
	ScopeChecker *preved = new ScopeChecker();
	ScopeChecker *preved2 = new ScopeChecker();
	
	// preved->saved_counter = 10;
	
	delete preved;
	delete preved2;
	
	some_test_func();
	
	{
		char *p = new char[6];
		p = (char*)"ololo";
		ScopeChecker sc_small_scope(p);
	}
	
	{
		ScopeChecker *p = new ScopeChecker((char*)"unique_ptr");
		std::unique_ptr<ScopeChecker> up{p};
		up->do_some_custom_action();
	}
	
	{
		ScopeChecker *p = new ScopeChecker((char*)"shared_ptr");
		std::shared_ptr<ScopeChecker> up{p};
		up->do_some_custom_action();
	}
	
	return 0;
}
