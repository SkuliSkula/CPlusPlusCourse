#include "stdafx.h"
#include "ex01-library.h"
#include <iostream>
#include <vector>
using namespace std;
// Exercise 1 (a)
// Check and correct if necessary
void display(double * * A, unsigned int n) {
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}
// Exercise 1 (b)
// Implement this function
void reset(double * * A, unsigned int n, double x) {
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			A[i][j] = x;
		}
	}
}
// Exercise 1 (c)
// Implement this function
vector<double> sumRows(double * * A, unsigned int n) {
	// Put your code here
	vector<double> sum(n, 0);
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			sum[i] += A[i][j];
		}
	}

	return sum;
}
// Exercise 1 (d)
// Implement this function
vector<double> sumCols(double * * A, unsigned int n) {
	vector<double> sum(n, 0);
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			sum[j] += A[i][j];
		}
	}

	return sum;
}
// Exercise 1 (e)
// Implement this function
void reduce(double * * A, unsigned int n) {
	
	double * * B = new double *[n];
	for (unsigned int i = 0; i<n; i++) {
		B[i] = new double[n];
	}
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			B[i][j] = (i > 0 ? A[(i - 1)][j] : 0) +
				(j < (n-1) ? A[i][(j+1)] : 0) + 
				(i < (n-1) ? A[(i+1)][j] : 0) +
				(j > 0 ? A[i][(j-1)] : 0);
		}
	}

	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < n; j++) {
			A[i][j] = B[i][j];
		}
	}
}
// Do not modify
void print(vector<double> & v) {
	for (unsigned int i = 0; i<v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}