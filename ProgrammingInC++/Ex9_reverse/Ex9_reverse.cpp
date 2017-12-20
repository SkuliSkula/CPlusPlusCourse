// Ex9_reverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int reverse(int arr[], int start, int end) {
	
	int tmp;
	if (start < end) {
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
		reverse(arr,start+1, end-1);
	}

	return 0;
}
int main()
{
	int arr[10];

	int in = 0;
	int counter = 0;
	while (cin >> in && (in != '\n' || in != ' ')) {
		arr[counter++] = in;
	}

	if(counter > 1)
		reverse(arr, 0, counter-1);

	for(int i = 0; i < counter; i++)
	{
		cout << arr[i] << endl;
	}

    return 0;
}

