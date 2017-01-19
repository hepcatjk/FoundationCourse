#pragma once
#ifndef _H_SHAPE
#define _H_SHAPE

class shape {
protected:
	int width, height;
public:
	shape() {};
	~shape() {};
	void set_values(int a, int b);

	virtual int area() = 0;
};

#endif