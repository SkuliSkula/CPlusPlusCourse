// Ex4FunWithBags.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main()
{
	set<int> bag;
	int num;
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
				bag.erase(num);
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

