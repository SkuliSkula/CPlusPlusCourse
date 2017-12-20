#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include "ex02-library.h"
using namespace std;
// Exercise 2
vector<string> match(vector<string> & u, vector<string> & v) {
	vector<string> w;
	if (u.empty() || v.empty()) {
		return w;
	}
	
	if (u[u.size()-1] == v[v.size()-1]) {
		vector<string> u2(u.begin(), u.end()-1);
		vector<string> v2(v.begin(), v.end()-1);
		w = match(u2, v2);
		w.push_back(u[u.size() - 1]);
		return w;
	}

	vector<string>uuu(u.begin(), u.end() - 1);
	vector<string> puv = match(uuu, v);

	vector<string> vv(v.begin(),v.end()-1);
	vector<string> upv = match(u,vv);

	if (puv.size() > upv.size()) {
		return puv;
	}
	else {
		return upv;
	}
		

}
// Do not modify
vector<string> read_until(string stop) {
	vector<string> u;
	string e;
	while (true) {
		cin >> e;
		if (cin.fail() || e == stop) break;
		u.push_back(e);
	}
	return u;
}
// Do not modify
void display(vector<string> & u) {
	for (unsigned int i = 0; i<u.size(); i++)
		cout << u[i] << " ";
	cout << endl;
}

