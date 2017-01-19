#include "triangle.h"

triangle::triangle()
{

}

triangle::triangle(int a, int b)
{
	width = a; height = b;
}


int triangle::area()
{
	return width*height / 2;
}