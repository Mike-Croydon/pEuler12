// This program solves Project Euler problem 12: Highly divisible triangular number

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector<long long int> getDivisors(long long int num)
{
	long long int i = 1;
	vector<long long int> divisors;
	while (i <= (num/2))
	{
		if (num % i == 0)
		{
			divisors.push_back(i);
		}
		++i;
	}
	cout << divisors.size() << endl;
	return divisors;
}

int main()
{
	long long int triNum = 1;
	long long int counter = 2;
	vector<long long int> triDivisors;
	while (triDivisors.size() < 500)
	{
		triNum += counter++;
		triDivisors = getDivisors(triNum);
	}

	cout << "The first triangular number with over 500 divisors is: " << triNum;

}

