// Ex11_FibonacciTrees.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "FibTree.h"

using namespace std;

int main()
{
	int n;

	cin >> n;
	FibTree tree(n);

	cout << "Call tree in pre-order: ";
	tree.preOrder();
	cout << endl;
	cout << "Call tree size: " << tree.size() << endl;
	cout << "Call tree depth: " << tree.depth() << endl;
	cout << "Call tree leafs: " << tree.leafs() << endl;

    return 0;
}

