// This program solves Project Euler problem 12: Highly divisible triangular number

#include "pch.h"
#include <iostream>
#include <vector>
#include "EulerLib.h"

using namespace std;

/*
vector<long long int> getDivisors(const long long int & num)
{
	long long int i = 1;
	vector<long long int> divisors;
	while (i <= sqrt(num))
	{
		if (num % i == 0)
		{
			divisors.push_back(i);
			divisors.push_back(num / i);
		}
		++i;
	}
	cout << divisors.size() << endl;
	return divisors;
}
*/

int main()
{
	long long int triNum = 1;
	long long int counter = 2;
	vector<long long int> triDivisors;
	while (triDivisors.size() < 500)
	{
		triNum += counter++;
		triDivisors = EulerLib::Misc::getDivisors(triNum);
	}

	cout << "The first triangular number with over 500 divisors is: " << triNum;

}

