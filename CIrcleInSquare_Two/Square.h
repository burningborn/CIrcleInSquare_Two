#pragma once
#include "Figures.h"
class Square :
    public Figures
{
protected:
    double a; // сторона квадрата

public:
    Square(double a, string name) : a{ a } {
        this->name = name;
        recalculatePS();
        cornerCount = 4;
    }

    void recalculatePS();

    // setters 
    void set_a(double a) {
        this->a = a;
        recalculatePS();
    }

    void displaySquare();
};
