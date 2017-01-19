#include "rectangle.h"

rectangle::rectangle()
{

}

rectangle::rectangle(int a, int b)
{
	width = a; height = b;
}


int rectangle::area()
{
	return width*height;
}