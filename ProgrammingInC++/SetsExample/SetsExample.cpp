// SetsExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <algorithm> 
#include <vector>

using namespace std;

int main()
{
	int myInts[] = { 20,34,56,78,13,7 };
	set<int> mySet(myInts,myInts+ 6);

	for (set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
		cout << " " << *it;
	}

	// Set intersection
	int first[] = { 5,10,15,20,25 };
	int second[] = { 50,40,30,20,10 };
	vector<int> v(10); // Store the intersection in a vector
	vector<int>::iterator it;

	sort(first, first + 5);
	sort(second, second + 5);

	it = set_intersection(first, first + 5, second, second + 5, v.begin());

	v.resize(it-v.begin());
	cout << endl;
	cout << "The intersection has " << (v.size()) << " elements:\n";
	for (it = v.begin(); it != v.end(); ++it)
		cout << ' ' << *it << endl;

    return 0;
}

