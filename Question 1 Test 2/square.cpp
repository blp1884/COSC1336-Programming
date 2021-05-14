#include <iostream>
#include <cmath>
#include "square.h"

Square::Square()
{
    setLength(1);
}
Square::Square(double dblpLength)
{
    setLength(dblLength);
}
Square::~Square()
{
    setLength(2);
}
void Square::setLength(double dblpLength)
{
    if (dblpLength < 0)
    {
        dblpLength = 1;
    }
}
double Square::getLength()
{
    return dblLength;
}
double Square::getWidth()
{
    return 2 * getLength();
}
double Square::getPerimeter()
{
    return 4 * getLength();
}
double Square::getArea()
{
    return getLength() * getWidth();
}
void Square::print()
{

    std::cout << "The length of the square is: " << getLength()
              << "The Width of the square is: " << getWidth()
              << "The Perimeter of the square is: " << getPerimeter()
              << "The Area of the square is: " << getArea() << std::endl;
}