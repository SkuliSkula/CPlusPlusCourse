// MatrixExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	unsigned int n = 3;
	double * * A = new double *[n];
	for (unsigned int i = 0; i<n; i++) { // Create the matrix
		A[i] = new double[n];
	}

	for (int i = 0; i < n; i++) { // Set everything to zero
		for (int j = 0; j < n; j++) {
			A[i][j] = 0;
		}
	}

	// Add some values
	A[0][1] = 1;
	A[1][1] = 2;
	A[2][2] = 3;
	A[2][1] = 4;

	// print the matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	vector<double> sum(n,0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				sum.insert(sum.begin(),A[i][j]);
		}
	}
	double summ = 0;
	for (auto& it: sum) {
		summ += it;
	}
	cout << summ << endl;
    return 0;
}

