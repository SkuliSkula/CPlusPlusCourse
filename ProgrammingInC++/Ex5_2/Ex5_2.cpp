// Ex5_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>  
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

	vector<int> out;
	vector<int>::iterator itA;
	vector<int>::iterator itB;

	while (a.size() != 0 || b.size() != 0) {
		
		if (a.size() > 0) {
			itA = a.begin();
			out.push_back(a.front());
			a.erase(itA);
		}
		
		if (b.size() > 0) {
			itB = b.begin();
			out.push_back(b.front());
			b.erase(itB);
		}
	}

	for (auto i : out)
		cout << i << endl;
	return 0;
}

