#include "Square.h"

void Square::recalculatePS()
{
    P = a* 4;
    S = a * a;
}

void Square::displaySquare()
{
    cout << "Square: ";
    display();
    cout << "a = " << a << endl;    
}