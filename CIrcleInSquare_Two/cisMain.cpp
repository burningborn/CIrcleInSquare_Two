#include <iostream>
using namespace std;

#include "Figures.h"
#include "Square.h"
#include "Circle.h"
#include "CircleInSquare.h"



#define delimiter "\=========================================================\n\n"
#define middle_line "\*********************************************************\n"
//#define MUTE

void main()
{
	setlocale(LC_ALL, "Russian");

	cout << delimiter;

#ifdef MUTE
	// 1. Прямоугольник
	Square rect(2, "ABCD"), rect_2(3, "EFGH");
	rect.displaySquare(); cout << endl;
	cout << middle_line << endl;
	rect_2.displaySquare(); cout << endl;
	cout << middle_line << endl;
	rect.set_a(1.4);
	rect.displaySquare();
	cout << "\n" << delimiter;

	// 2. Круг
	Circle crl(5, "Pi_R");
	crl.displayCircle();
	cout << "\n" << middle_line << endl;
	crl.setR(7);
	crl.displayCircle();
	cout << "\n" << delimiter;

#endif // MUTE

	// 3. Круг вписаный в квадрат

	CircleInSquare CIS(3, "KBADPAT", "KRUG");
	CIS.displayCIS();
	cout << delimiter;
	CIS.set_radius(5.7);
	CIS.displayCIS();

}