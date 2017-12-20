#pragma once
#include "stdafx.h"

class FibTree
{
public:
	FibTree(int n);
	~FibTree();
	void preOrder(void);
	int size(void);
	int depth(void);
	int leafs(void);
private:
	int value;
	FibTree *left;
	FibTree *right;
};
