// VectorsExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	/*vector<int> myIntVector;
	vector<string> myStringVector;

	vector<int>::iterator itInt;
	vector<string>::iterator itString;

	for (int i = 1; i <= 10; i++) {
		myIntVector.push_back(i);
	}

	string stringArr[] = {"Aaa","Bbb","Ccc","Ddd","Eee"};
	myStringVector.assign(stringArr, stringArr+5);
	

	// Looping over the vector using an iteator
	for (itInt = myIntVector.begin(); itInt != myIntVector.end(); ++itInt) {
		cout << *itInt << " ";
	}

	cout << endl;

	for (auto& itString : myStringVector) {
		cout << itString << ", ";
	}

	cout << endl;


	cout << myStringVector.back() << endl;*/

	vector<string> myStringVector;
	string stringArr[] = { "Aaa","Bbb","Ccc","Ddd","Eee" };
	myStringVector.assign(stringArr, stringArr + 5);
	vector<string> temp(myStringVector.end() - 1, myStringVector.end()); // only the last element

	for (auto& itString : temp) {
		cout << itString << endl;
	}

	vector<string> temp2(myStringVector.begin(),myStringVector.end()-1);

	for (auto& itString : temp2) {
		cout << itString << endl;
	}

	cout << temp[temp.size()-1] << endl;
    return 0;
}

