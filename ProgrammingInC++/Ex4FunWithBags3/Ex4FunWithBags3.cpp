// Ex4FunWithBags3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main()
{
	multiset<double> bag;
	double num;
	string output;
	bool quit = false;

	while (!quit) {
		char inp[5];
		cin >> inp;

		for (int i = 0; i < 5; i++)
		{
			if (inp[i] == 'a' && inp[i + 1] == 'd' && inp[i + 2] == 'd') {
				cin >> num;
				bag.insert(num);
			}
			else if (inp[i] == 'd' && inp[i + 1] == 'e' && inp[i + 2] == 'l') {
				cin >> num;
				multiset<double>::iterator hit(bag.find(num));
				if (hit != bag.end()) bag.erase(hit);
			}
			else if (inp[i] == 'q' && inp[i + 1] == 'r' && inp[i + 2] == 'y') {
				cin >> num;
				if (bag.find(num) != bag.end())
					output += "T";
				else
					output += "F";
			}
			else if (inp[i] == 'q' && inp[i + 1] == 'u' && inp[i + 2] == 'i' && inp[i + 3] == 't')
				quit = true;
		}
		if (quit)
			break;
	}

	cout << output << endl;
	return 0;
}

