#include <iostream>
#include <fstream>
#include <algorithm>
#include<limits.h>
#include "Pandigital.h"

using namespace std;

int main(int argc, char **argv)
{
	cout << "Max int: " << INT_MAX << endl;
	cout << "Max long: " << LONG_MAX << endl;
	
	Pandigital pd;
	
	cout << "789 is " << (pd.IsPermutationNumber(789) ? "" : "not ") << "pandigital" << endl;
	cout << "709 is " << (pd.IsPermutationNumber(709) ? "" : "not ") << "pandigital" << endl;
	cout << "9847362 is " << (pd.IsPermutationNumber(9847362) ? "" : "not ") << "pandigital" << endl;
	cout << "98047362 is " << (pd.IsPermutationNumber(98047362) ? "" : "not ") << "pandigital" << endl;
	cout << "1 is " << (pd.IsPermutationNumber(1) ? "" : "not ") << "pandigital" << endl;
	cout << "98447362 is " << (pd.IsPermutationNumber(98447362) ? "" : "not ") << "pandigital" << endl;
	cout << "29847362 is " << (pd.IsPermutationNumber(29847362) ? "" : "not ") << "pandigital" << endl;
	
	pd.GetPermutationNumbers(100);
	
	/*cout << "before 100 exists " << pd.GetPermutationNumbers(100).size() << " permutation numbers" << endl;
	cout << "before 1000 exists " << pd.GetPermutationNumbers(1000).size() << " permutation numbers" << endl;
	cout << "before 10000 exists " << pd.GetPermutationNumbers(10000).size() << " permutation numbers" << endl;
	cout << "before 100000 exists " << pd.GetPermutationNumbers(100000).size() << " permutation numbers" << endl;
	cout << "before 100000 exists " << pd.GetPermutationNumbers(100000).size() << " permutation numbers" << endl;
	cout << "before 1000000 exists " << pd.GetPermutationNumbers(1000000).size() << " permutation numbers" << endl;
	cout << "before 10000000 exists " << pd.GetPermutationNumbers(10000000).size() << " permutation numbers" << endl;
	cout << "before 100000000 exists " << pd.GetPermutationNumbers(100000000).size() << " permutation numbers" << endl;
	*/
	
	auto permSet = pd.GetPermutationNumbers(987654321);
	// auto permSet = pd.GetPermutationNumbers(100);
	
	cout << "before 987654321 exists " << permSet.size() << " permutation numbers" << endl;
	
	ofstream myfile;
    myfile.open("/data/3/soft/devel/c_tutorial_codelite/c_codelite/Programming/data/permutations.txt");
	
	for_each(permSet.begin(), permSet.end(), [&](const long x)
	{
		myfile << x << endl;
	});
	
	// 100000000
	// 987654321
	
    return 0;
}
