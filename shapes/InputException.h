#pragma once
#include <exception>

class InputException : public std::exception
{
public:
	virtual const char* what() const
	{
		return "This is an input exception!\n";
	}
};