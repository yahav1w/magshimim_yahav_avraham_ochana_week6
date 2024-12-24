#pragma once
#include <cmath>
#include <iostream>

class MathUtils
{
public:
	static double CalPentagonArea(double side)
	{
		double pi = 2 * acos(0.0);
		double res = (5 * side * side);
		double cot = 4 * std::tan(pi / 5);
		return res / cot;
	}
	static double CalHexagonArea(double side)
	{
		return (3 * std::sqrt(3) / 2) * side * side;
	}
};

