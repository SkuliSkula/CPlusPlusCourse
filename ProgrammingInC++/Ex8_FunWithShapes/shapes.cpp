#include "stdafx.h"
#include "shapes.h"
#define _USE_MATH_DEFINES
#include <cmath>
/*************************** Rectangle *********************************/
Rectangle::Rectangle(double height, double width) {
	this->h = height;
	this->w = width;
}

double Rectangle::area()const {
	return h * w;
}
double Rectangle::perimeter()const {
	return (2 * h) + (2 * w);
}
void Rectangle::rotate() {
	double tmp = this->h;
	this->h = this->w;
	this->w = tmp;
}
double Rectangle::height()const {
	return h;
}
double Rectangle::width()const {
	return w;
}

/*************************** Square *************************************/

Square::Square(double length) {
	this->length = length;
}

double Square::area() const {
	return length * length;
}
double Square::perimeter() const {
	return 4 * length;
}

double Square::height()const {
	return length;
}
double Square::width()const {
	return length;
}

void Square::rotate() {

}

/*************************** Circle *************************************/
Circle::Circle(double radius) {
	this->radius = radius;
}
double Circle::area() const {
	return M_PI * radius * radius;
}
double Circle::perimeter() const {
	return 2 * M_PI * radius;
}
double Circle::height()const {
	return radius * 2;
}
double Circle::width()const {
	return radius * 2;
}

void Circle::rotate() {

}

