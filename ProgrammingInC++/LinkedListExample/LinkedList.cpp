#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList() {
	head = nullptr;
	tail = nullptr;
}

void LinkedList::createNode(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = nullptr;
	if (head == nullptr) {
		head = temp;
		tail = temp;
		temp = nullptr;
	}
	else {
		tail->next = temp;
		tail = temp;
	}
}

void LinkedList::display() {
	node *temp = new node;
	temp = head;

	while (temp != nullptr) {
		cout << temp->data << endl;
		temp = temp->next;
	}
}

void LinkedList::insertStart(int value) {
	node *temp = new node;
	temp->data = value;
	temp->next = head;
	head = temp;
}

void LinkedList::insertPosition(int pos, int value) {
	node *pre = new node;
	node *curr = new node;
	node *temp = new node;
	curr = head;
	for (int i = 0; i < pos; i++) {
		pre = curr;
		curr = curr->next;
	}
	temp->data = value;
	pre->next = temp;
	temp->next = curr;
}