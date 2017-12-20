// Ex10DoublyLinkedLists.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "doubly-linked.h"
using namespace std;
int main()
{
	List l;
	int n;

	while (cin >> n) {
		l.insert(n);
	}
	

	l.print();
	l.reverse();
	l.print();

    return 0;
}

