#pragma once
#include "Shape.h"

class Hexagon : public Shape
{
private:
	double side;
public:
	Hexagon(std::string name, std::string col,double side);
	void SetSide(int side);
	virtual void draw();
	virtual double CalArea();
};

