// Ex9_fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int fibonacciRecursive(int number) {

	if (number == 0 || number == 1)
		return 1;
	else
		return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}
int main()
{
	int arr[100];

	int in = 0;
	int counter = 0;
	while (cin >> in && (in != '\n' || in != ' ')) {
		arr[counter++] = in;
	}

	for(int i = 0; i < counter; i++)
		cout << fibonacciRecursive(arr[i]) << endl;

    return 0;
}

