#include "versyera.h"

Versyera::Versyera(double a) {// constructor
	std::cout << this << " created by 1 constr" << std::endl;
	this->a_ = a;
	this->y_ = 1;
	this->x_ = pow(a, 3) / y_ - pow(a, 2);
}

Versyera:: Versyera(double a, double x) {//construtor
	std::cout << this << " created by 2 constr" << std::endl;
	this->a_ = a;
	this->setX(x);
}

double Versyera::getX() {
	return this->x_;
}

double Versyera::getY() {
	return this->y_;
}

double Versyera:: getA() {
	return this->a_;
}

void Versyera:: setY(double y) {
	this->y_ = y;
	this->x_ = pow(a_, 3) / y_ - pow(a_, 2);
}

void Versyera:: setA(double a) {
	this->a_ = a;
	this->x_ = pow(a, 3) / y_ - pow(a, 2);
}

void Versyera:: setX(double x) {
	this->x_ = x;
	this->y_ = pow(a_, 3) / (pow(a_, 2) + pow(x, 2));
}

double Versyera:: getYByX(double x) {
	this->setX(x);
	return y_;
}

std::vector<std::pair<double, double>> Versyera:: points() {
	return  { { a_ / sqrt(3),3 * a_ / 4},{-a_ / sqrt(3),3 * a_ / 4 } };
}

double Versyera:: space() {
	return pow(a_, 2) * M_PI;
}

double Versyera:: volume() {
	return pow(a_, 3) * pow(M_PI, 2) / 2;
}

std::vector<char> Versyera:: getEquation() {
	return { 'y','=','a','^','3','/','(','a','^','2','+','x','^','2',')' };
}

Versyera:: ~Versyera() {
	std::cout << " deleted" << std::endl;
}
