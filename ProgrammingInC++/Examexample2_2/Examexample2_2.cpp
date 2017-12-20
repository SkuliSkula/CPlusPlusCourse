// Examexample2_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include "ex02-library.h"
int main(void) {
	// Read two sequences of strings
	// end of sequence is denote by "STOP"

	string stringArr1[] = { "X","Y","Z"};
	string stringArr2[] = { "X","Z"};
	vector<string> u;	
	u.assign(stringArr1, stringArr1+1);
	vector<string> v;
	v.assign(stringArr2, stringArr2 + 1);
	// Match the sequences
	vector<string> w = match(u, v);
	// Display the result
	display(w);
	return 0;
}

