#pragma once
#include "Square.h"
#include "Circle.h"

class CircleInSquare :
	public Square, public Circle
{
private:
	double radius;

public:
	CircleInSquare(double radius, string SQUARE, string CIRCLE): Square(radius, SQUARE), Circle(radius, CIRCLE){}

	double get_radius() { return radius; }

	void set_radius(double radius) {
		this->radius = radius;
		set_a(radius);
		setR(radius);
	}

	void displayCIS() {
		cout << endl;
		cout << "Circle radius in Square is: " << get_radius() << endl;
		cout << endl;
		displayCircle();
		cout << endl;
		displaySquare();
	}
};

