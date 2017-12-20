// MapsExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	/*map<string,int> myMap;

	myMap.insert(pair<string,int>("First", 1));
	myMap.insert(pair<string, int>("Second", 2));
	myMap.insert(pair<string, int>("Third", 3));
	myMap.insert(pair<string, int>("Fourth", 4));
	myMap.insert(pair<string, int>("Fifth", 5));

	map<string, int>::iterator it;

	// The map is sorted alphabetically 
	for (it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << " => " << it->second << endl;
	}

	cout << endl;

	// Inserting with an iterator (more efficient)
	it = myMap.begin();
	myMap.insert(it, pair<string,int>("Six", 6));
	myMap.insert(it, pair<string, int>("Seven", 7));

	for (it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << " => " << it->second << endl;
	}

	// Finding an element 

	cout << "elements in mymap:" << '\n';
	cout << "First => " << myMap.find("First")->second << '\n';
	cout << "Sceond => " << myMap.find("Second")->second << '\n';
	cout << "Third => " << myMap.find("Third")->second << '\n';
	*/

	map<string, string> myMap;
	string key = "car";
	string translation = "bil";
	myMap[key] = translation;

	auto it = myMap.find(key);
	auto itt = myMap.find(translation);

	if (it != myMap.end()) {
		cout << "Found key" << endl;
	}

	if (itt != myMap.end()) {
		cout << "found translation" << endl;
	}

	cout << myMap[key] << endl;

    return 0;
}

