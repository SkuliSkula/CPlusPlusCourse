#include "stdafx.h"
#include "doubly-linked.h"
#include <iostream>

using namespace std;
// Constructor
List::List() {
	first = NULL; 
}

// Destructor
List::~List() {
	
}

void List::insert(int n) {
	struct Node *s, *temp;
	temp = new(struct Node);
	temp->val = n;
	temp->next = NULL;
	if (first == NULL)
	{
		temp->prev = NULL;
		first = temp;
	}
	else
	{
		s = first;
		while (s->next != NULL)
			s = s->next;
		s->next = temp;
		temp->prev = s;
	}

}

void List::reverse(void) {
	Node *head = first;
	while (head)
	{
		Node * t = head->prev;
		head->prev = head->next;
		head->next = t;
		if (head->prev != NULL)
			head = head->prev;  
		else
			break;             
	}
	first = head;
}

void List::print(void) {
	Node *head = first;
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	
}