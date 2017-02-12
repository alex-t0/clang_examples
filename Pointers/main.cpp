#include <iostream>
#include <time.h>
#include <stdlib.h>

int rand_func()
{
	srand(time(NULL));
	return rand();
}

void f1(int n)
{
	int arr[n];
	arr[0] = 42;
}

int main(int argc, char **argv)
{
	char v[1000];
	char cv[5] = {'A', 'B', 'C', 'D', 'Z'};
	char v2[rand_func()];
	int N = rand_func();
	char v3[N];
	
	v[999] = 'A';
	
	//   v - pointer to
	char *p = &cv[2]; 
	//        ^ address of
	
	std::cout << "p[0] = " << p[0] << std::endl;
	
	char& ref1 = cv[2];
	ref1 = cv[3];
	
	std::cout << "ref1 = " << ref1 << std::endl;
	
	std::cout << "p + 1 = " << p + 1 << std::endl;
	std::cout << "ref1 + 1 = " << ref1 + 1 << std::endl;
	
	std::cout << std::endl << "===============" << std::endl;
	
	int x0 = 5;
	int& y0 = x0;
	y0++;
	std::cout << "x0 = " << x0 << std::endl;
	
	int x1 = 5;
	int *y1 = &x1;
	(*y1)++;
	std::cout << "(1) x1 = " << x1 << std::endl;
	(*y1) = 42;
	std::cout << "(2) x1 = " << x1 << std::endl;
	
	std::cout << std::endl << "===============" << std::endl;
	
	int somevar = 42;
	int& xref = somevar;
	
	{
		int scopedvar = 5;
		xref = scopedvar;
		int& xref2 = scopedvar;
		scopedvar++;
		std::cout << "(1) xref = " << xref << std::endl;
		std::cout << "(1) xref2 = " << xref2 << std::endl;
	}
	std::cout << "(2) xref = " << xref << std::endl;
	std::cout << "(2) somevar = " << somevar << std::endl;
	
	std::cout << std::endl << "===============" << std::endl;
	
	char v4[5] = {0,1,2,3,4};
	std::cout << "v4[4] = " << v4[4] << std::endl;
	
	std::cout << std::endl << "======= nullptr ========" << std::endl;
	double *pd = nullptr;
	if (nullptr == NULL)
		std::cout << std::endl << "nullptr == NULL" << std::endl;
	else
		std::cout << std::endl << "nullptr != NULL" << std::endl;
	
	if (nullptr == 0)
		std::cout << std::endl << "nullptr == 0" << std::endl;
	else
		std::cout << std::endl << "nullptr != 0" << std::endl;
	
	std::cout << std::endl << "42 + nullptr == " << 42 + (long)nullptr << std::endl;
	std::cout << std::endl << "42 * nullptr == " << 42 * (long)nullptr << std::endl;
	
	std::cout << std::endl << "42 + NULL == " << 42 + NULL << std::endl;
	std::cout << std::endl << "42 * NULL == " << 42 * NULL << std::endl;
	
	char******************************************************** megapointer;
	
	int* ap[50]; // array of 50 pointers to int
	
	int (*fp)(char*); 	// pointer to func, char* parameter, returns int
	int* f(char*);		// function, returns int*, parameter char*
	
	int local_variable = 42;
	// f = [&](char* lparam1) { local_variable = *lparam1; };
	
	// f1(-10);
	
	if (sizeof("jopa") == 5)
		std::cout << "size of jopa is 5" << std::endl;
	
	std::cout<< "beep at end of message\a\n";
	
	return 0;
}
