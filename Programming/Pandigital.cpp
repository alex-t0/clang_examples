#include "Pandigital.h"
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

bool Pandigital::IsPermutationNumber(long num)
{
	// vector<short> v;
	set<short> v;
	
	while (num > 0)
	{
		short remainder = num % 10;
		
		if (remainder == 0) return false;
		
		if (find(v.begin(), v.end(), remainder) != v.end())
			return false;
		
		// v.push_back(remainder);
		v.insert(remainder);
		num = num / 10;
	}
	
	return true;
}

set<long> Pandigital::GetPermutationNumbers(long num)
{
	set<long> result;
	
	for (long i = 1; i <= num; i++)
	{
		if (IsPermutationNumber(i))
			// result.push_back(i);
			result.insert(i);
		
		if (i % 50000000 == 0)
			std::cout << "i = " << i << std::endl;
	}
	
	return result;
}