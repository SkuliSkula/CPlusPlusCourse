// Ex9_The_Levenshtein_distance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int levenshtein(const char *s, int len_s, const char *t, int len_t)
{
	int distance;
	if (len_s == 0) 
		return len_t;
	if (len_t == 0) 
		return len_s;

	if (s[len_s - 1] == t[len_t - 1])
		distance = 0;
	else
		distance = 1;

	return min(levenshtein(s, len_s - 1, t, len_t) + 1, min(levenshtein(s, len_s, t, len_t - 1) + 1, levenshtein(s, len_s - 1, t, len_t - 1) + distance));
}
int main()
{
	string input;

	getline(cin, input);

	char first[100];
	char second[100];
	int counter1 = 0;
	int counter2 = 0;
	bool use1 = true;
	for (int i = 0; i < input.length(); i++) {
		if (input.at(i) == ' ')
			use1 = false;

		if (use1 && input.at(i) != ' ') {
			first[counter1++] = input.at(i);
		}
		else if(!use1 && input.at(i) != ' '){
			second[counter2++] = input.at(i);
		}
	}

	int result = levenshtein(first, counter1, second, counter2);
	cout << result << endl;
    return 0;
}

