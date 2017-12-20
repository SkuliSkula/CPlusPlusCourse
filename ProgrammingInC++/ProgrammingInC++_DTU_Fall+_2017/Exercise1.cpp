// ProgrammingInC++_DTU_Fall+_2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double x;
	double y;
	double z;
	double result;
	cin >> x;
	cin >> y;
	cin >> z;

	result = (x + y) - z;

	cout << result;

    return 0;
}

