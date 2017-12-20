#include "stdafx.h"
#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b) {
	x = a;
	y = b;
}

v2d::v2d(const v2d & v) {
	x = v.x;
	y = v.y;
}

v2d::~v2d() {
	// Destructor
}

v2d & v2d::operator=(const v2d &v) {
	if (this != &v) {
		x = v.x;
		y = v.y;
	}
	return *this;
}

v2d & v2d::operator+(const v2d &v) {
	x = v.x + x;
	y = v.y + y;
	return *this;
}

double v2d::operator*(const v2d &v) {
	return ((this->x * v.x) + (this->y * v.y));
}

v2d & v2d::operator*(double k) {
	x = k * x;
	y = k * y;
	return *this;
}

double v2d::length() {
	return sqrt((x*x) + (y*y));
}