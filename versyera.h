#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

class Versyera{
private:
	double x_, y_, a_;

public:

	Versyera(double a);

	Versyera(double a, double x);

	double getX();

	double getY();

	double getA();

	void setX(double x);

	void setY(double y);

	void setA(double a);

	double getYByX(double x);

	std::vector<std::pair<double, double>> points();

	double space();

	double volume();

	std::vector<char> getEquation();

	~Versyera();
};


