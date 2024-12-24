#include "Pentagon.h"
#include "MathUtils.h"
#include "ShapeException.h"
//constructor
Pentagon::Pentagon(std::string name, std::string col, double side) : Shape(name, col)
{
	SetSide(side);
}

//the function set the value of the sides of the Pentagon to the input
//side - the new size of the sides
void Pentagon::SetSide(int side)
{
	if (side < 0)
	{
		throw ShapeException();
	}
	this->side = side;
}

//the function write the info about the Pentagon
void Pentagon::draw()
{
	std::cout << std::endl << "Color is " << getColor() << std::endl << "Name is " << getName() << std::endl << "side: " << this->side << std::endl << "Area: " << CalArea() << std::endl;;
}

//the function calculate and return the area of the Pentgagon
double Pentagon::CalArea()
{
	return MathUtils::CalPentagonArea(side);
}
