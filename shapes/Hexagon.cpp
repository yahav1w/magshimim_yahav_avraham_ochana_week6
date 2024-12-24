#include "Hexagon.h"
#include "MathUtils.h"
#include "ShapeException.h"
//constractor
Hexagon::Hexagon(std::string name, std::string col, double side) : Shape(name,col)
{
	SetSide(side);
}

//the function set the value of the sides of the Hexagon to the input
//side - the new size of the sides
void Hexagon::SetSide(int side)
{
	if (side < 0)
	{
		throw ShapeException();
	}
	this->side = side;
}


//the function write the info about the Hexagon
void Hexagon::draw()
{
	std::cout << std::endl << "Color is " << getColor() << std::endl << "Name is " << getName() << std::endl << "side: " << this->side << std::endl << "Area: " << CalArea() << std::endl;;
}

//the function calculate and return the area of the Hexagon
double Hexagon::CalArea()
{
	return MathUtils::CalHexagonArea(side);
}
