// Ex2PrimeFactorization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i = 2;
	cin >> n;
	
	while (i <= n)
	{
		if (n % i == 0) {
			cout << i;
			if (i < n)
				cout << " * ";
			n = n / i;
		}
		else
			i++;
	}
	
	return 0;

}

