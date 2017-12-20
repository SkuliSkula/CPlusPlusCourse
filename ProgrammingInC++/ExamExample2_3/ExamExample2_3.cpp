// ExamExample2_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
#include "ex03-library.h"
using namespace std;
int main(void) {
	Dictionary d;

	d.insert_synonym("english", "car", "auto");
	d.insert_synonym("english", "auto", "car");
	d.insert_synonym("english", "car", "wagon");
	d.insert_synonym("english", "car", "vehicle");

	d.insert_synonym("danish", "bil", "vogn");
	d.insert_synonym("danish", "bil", "automobil");

	set<string> s = d.get_synonyms("english", "car");
	for (set<string>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << endl;

	s = d.get_synonyms("danish", "bil");
	for (set<string>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << endl;

	return 0;
}

