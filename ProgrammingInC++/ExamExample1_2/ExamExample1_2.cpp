// ExamExample1_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ex02-library.h"
#include <iostream>
#include <vector>
#include <string>

int main(void) {
	// Read two sequences of strings
	// end of sequence is denote by "STOP"
	vector<string> u = {"ABC"};
	vector<string> v = { "ABCDA" };
	// Match the sequences
	vector<string> w = match(u, v);
	// Display the result
	display(w);
	return 0;
}

