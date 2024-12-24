#pragma once
#include <exception>

class ShapeException : public std::exception
{
public:
	virtual char const* what() const noexcept override
	{
		return "This is a shape exception!\n";
	}
};