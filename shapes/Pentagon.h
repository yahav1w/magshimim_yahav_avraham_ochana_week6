#pragma once
#include "Shape.h"

class Pentagon:public Shape
{
private:
	double side;
public:
	Pentagon(std::string name, std::string col, double side);
	void SetSide(int side);
	virtual void draw();
	virtual double CalArea();
};

