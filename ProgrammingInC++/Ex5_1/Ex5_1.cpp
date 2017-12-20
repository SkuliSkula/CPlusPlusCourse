// Ex5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <algorithm>  
#include <vector>

using namespace std;

int main()
{
	vector<int> a;
	vector<int> b;
	int counter = 6;
	
	while (counter > 0) {
		char input;
		cin >> input;

		if (input == 'a') {
			cin >> input;
			int num = input - '0';
			a.push_back(num);
		}
		else if (input == 'b') {
			cin >> input;
			int num = input - '0';
			b.push_back(num);
		}
		counter--;
	}

	sort (a.begin(), a.end());
	for (auto item : a)
		cout << item << endl;

	sort(b.begin(), b.end());
	for (auto item : b)
		cout << item << endl;

    return 0;
}

