// Ex9_Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int isPalindrome(int arr[],int start, int end) {
	int tmp = 1;
	if (start < end) {
		if (arr[start] != arr[end]) {
			tmp = 0;
		}
	}
	else {
		return isPalindrome(arr, (start + 1), (end - 1));
	}
	return tmp;
}


int main()
{

	int arr[100];

	int in = 0;
	int counter = 0;
	while (cin >> in && (in != '\n' || in != ' ')) {
		arr[counter++] = in;
	}
	
	if(counter == 1 || counter <= 2)
		cout << "yes" << endl;
	else if (isPalindrome(arr, 0, counter-1)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

    return 0;
}

