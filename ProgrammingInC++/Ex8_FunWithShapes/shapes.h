#pragma once


class Shape {
public :
	virtual double area()const = 0;
	virtual double perimeter()const = 0;
	virtual double height()const = 0;
	virtual double width()const = 0;
	virtual void rotate() = 0;
};

class Rectangle : public Shape {
private:
	double w;
	double h;
public:
	Rectangle(double height, double width);
	double area()const;
	double perimeter()const;
	void rotate();
	double height()const;
	double width()const;
};

class Square : public Shape {
private:
	double length;
public:
	Square(double length);
	double area()const;
	double perimeter()const;
	double height()const;
	double width()const;
	void rotate();
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double radius);
	double area()const;
	double perimeter()const;
	double height()const;
	double width()const;
	void rotate();
};