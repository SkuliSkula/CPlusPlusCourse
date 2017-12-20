// Ex_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class fraction {
private:
	int numerator;
	int denominator;
public:
	fraction(int n, int d) {
		numerator = n;
		denominator = d;
	}
	void add(fraction f) {
		numerator = numerator * f.denominator + f.numerator * denominator;
		denominator = denominator * f.denominator;
		simplify();
	}
	void mult(fraction f) {
		numerator = numerator * f.numerator;
		denominator = denominator * f.denominator;
		simplify();
	}
	void div(fraction f) {
		numerator = numerator * f.denominator;
		denominator = denominator * f.numerator;
		simplify();
	}
	void simplify() {
		for (int i = denominator * numerator; i > 1; i--) {
			if ((numerator % i == 0) && denominator % i == 0) {
				numerator /= i;
				denominator /= i;
			}
		}
	}
	void display(void) {
		cout << numerator << " / " << denominator << endl;
	}
};

int main()
{

	int n;
	char split;
	int m;
	string operation;

	int nn;
	char splitt;
	int mm;

	int counter = 0;
	while (counter < 3) 
	{
		cin >> n;
		cin >> split;
		cin >> m;
		cin >> operation;
		cin >> nn;
		cin >> splitt;
		cin >> mm;

		if (operation == "+") {
			fraction fadd(n, m);
			fadd.add(fraction(nn, mm));
			fadd.display();
		}
		else if (operation == "*") {
			fraction fmult(n, m);
			fmult.mult(fraction(nn, mm));
			fmult.display();
		}
		else if (operation == "div") {
			fraction fdiv(n, m);
			fdiv.div(fraction(nn, mm));
			fdiv.display();
		}
		counter++;
	}

    return 0;
}

