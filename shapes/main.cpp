#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "ShapeException.h"
#include "InputException.h"
#include "Hexagon.h"
#include "Pentagon.h"
#include <string>
#include <iostream>

int main()
{
	std::string nam, col; double rad = 0, ang = 0, ang2 = 180; int height = 0, width = 0;
	Circle circ(col, nam, rad);
	Quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	Parallelogram para(nam, col, width, height, ang, ang2);
	Hexagon Hexa(nam, col, width);
	Pentagon Penta(nam, col, width);

	Shape *ptrcirc = &circ;
	Shape *ptrquad = &quad;
	Shape *ptrrec = &rec;
	Shape *ptrpara = &para;
	Shape *ptrHex = &Hexa;
	Shape *ptrPen = &Penta;


	
	std::cout << "Enter information for your objects" << std::endl;
	const char circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p',Hexagon = 'h',Pentagon = 'g'; char shapetype;
	char x = 'y';
	while (x != 'x') 
	{
		std::cout << "which shape would you like to work with?.. \nc=circle, q = quadrilateral, r = rectangle, p = parallelogram,h = Hexagon,g = Pentagon" << std::endl;
		std::cin >> shapetype;

		try
		{
			if (std::cin.peek() != '\n')
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				throw std::string("Warning - Don't try to build more than one shape at once\n");
			}
			switch (shapetype) {
			case 'c':
				std::cout << "enter color, name,  rad for circle" << std::endl;
				std::cin >> col >> nam >> rad;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				circ.setColor(col);
				circ.setName(nam);
				circ.setRad(rad);
				ptrcirc->draw();
				break;
			case 'q':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				quad.setName(nam);
				quad.setColor(col);
				quad.setHeight(height);
				quad.setWidth(width);
				ptrquad->draw();
				break;
			case 'r':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col >> height >> width;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				rec.setName(nam);
				rec.setColor(col);
				rec.setHeight(height);
				rec.setWidth(width);
				ptrrec->draw();
				break;
			case 'p':
				std::cout << "enter name, color, height, width, 2 angles" << std::endl;
				std::cin >> nam >> col >> height >> width >> ang >> ang2;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				para.setName(nam);
				para.setColor(col);
				para.setHeight(height);
				para.setWidth(width);
				para.setAngle(ang, ang2);
				ptrpara->draw();
				break;
			case 'h':
				std::cout << "enter name, color, side" << std::endl;
				std::cin >> nam >> col >> width;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				Hexa.setName(nam);
				Hexa.setColor(col);
				Hexa.SetSide(width);
				ptrpara->draw();
				break;
			case 'g':
				std::cout << "enter name, color, side" << std::endl;
				std::cin >> nam >> col >> width;
				if (std::cin.fail())
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					throw InputException();
				}
				Penta.setName(nam);
				Penta.setColor(col);
				Penta.SetSide(width);
				ptrPen->draw();
				break;
			default:
				std::cout << "you have entered an invalid letter, please re-enter" << std::endl;
				break;
			}
			std::cin.clear();
			std::cout << "would you like to add more object press any key if not press x" << std::endl;
			std::cin >> x;
			if (std::cin.peek() != '\n')
			{
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				throw std::string("Warning - Don't enter more than one key\n");
			}
		}
		catch (std::exception &e)
		{			
			printf(e.what());
		}
		catch (std::string e)
		{
			std::cout << e;
		}
		catch (...)
		{
			printf("caught a bad exception. continuing as usual\n");
		}
	}
	
	system("pause");
	return 0;
	
}