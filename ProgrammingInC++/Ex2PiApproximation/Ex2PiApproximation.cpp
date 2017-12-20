// Ex2PiApproximation.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int power(int value, int n)
{
	
	if (n == 0)
		return 1;
	else if (n % 2 == 0)
		return value * value;
	else
		return value * power(value, n-1);
}

double pi(int n)
{

	double ppi = 0;

	for (int i = 0; i < n; i++)
	{
			ppi += power(-1, i) / (2.0 * i + 1);
	}

	return ppi * 4;
}

double pii(int x) {
	double res = 0;
	for (int i = 0; i < x; i++) {
		res += 4 * (pow(-1, i)) / (2 * i + 1);
	}
	return res;
}

int main()
{
	int n;

	cin >> n;

	cout << pii(n) << endl;
	cout << pi(n);

    return 0;
}

