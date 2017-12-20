#include "stdafx.h"

struct node {
	int data;
	node *next;
};

class LinkedList {
private:
	node *head, *tail;
public:
	LinkedList();
	void createNode(int value);
	void display();
	void insertStart(int value);
	void insertPosition(int pos, int value);
};
