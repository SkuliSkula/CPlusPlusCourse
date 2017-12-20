// Ex3Histogram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> numArray;
	int l; // Number of intervals
	int n; // Size of the data set, only non-negative integers
	int m; // Maximum number in data set
	int k; // Size of intervals

	cin >> l;
	cin >> n;

	int counter = 0;
	int nn;
	int maxNumber = 0;
	while (counter < n)
	{
		cin >> nn;
		numArray.push_back(nn);
		counter++;
		if (maxNumber < nn)
			maxNumber = nn;
	}

	// Calculate size of interval
	k = (maxNumber / l) + 1;

	// Create the intervals
	int* numbers = numArray.data();
	int interval;
	for (int i = 1; i <= l; i++)
	{
		int counter = 0;
		interval = ((i - 1) * k);
		cout << interval << ": ";
		for (int j = 0; j < n; j++)
		{
			if (numbers[j] >= interval && numbers[j] < (interval + k))
				counter++;
		}
		cout << counter << endl;
	}


    return 0;
}

