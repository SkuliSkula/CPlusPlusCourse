#include "stdafx.h"
#include "FibTree.h"
#include <iostream>
#include <algorithm>

using namespace std;
FibTree::FibTree(int n) {
	if (n > 1) {
		left = new FibTree(n-1);
		right = new FibTree(n - 2);
		value = left->value + right->value;
	}
	else {
		value = 1;
		left = nullptr;
		right = nullptr;
	}
}

FibTree::~FibTree() {
	if(left != nullptr)
		delete left;
	if(right != nullptr)
		delete right;
}

void FibTree::preOrder() {
	cout << value << " ";
	if (left != nullptr && right != nullptr) {
		left->preOrder();
		right->preOrder();
	}
}

int FibTree::size() {
	if (left == nullptr && right == nullptr)
		return 1;
	if (left->size() == 0 && left->size() == 1)
		return 1;
	else if (right->size() == 0 && right->size() == 1)
		return 1;
	else
		return 1 + left->size() + right->size();
}

int FibTree::depth() {
	if (left == nullptr && right == nullptr)
		return 1;
	if (left->depth() == 0 && left->depth() == 1)
		return 1;
	else if (right->depth() == 0 && right->depth() == 1)
		return 1;
	else
		return 1+ max(left->depth(), right->depth());
}

int FibTree::leafs() {
	int counter = 0;
	if (left != nullptr && right != nullptr) {
		counter += left->leafs();
		counter += right->leafs();
	}
	else {
		return 1;
	}
	return counter;
}

