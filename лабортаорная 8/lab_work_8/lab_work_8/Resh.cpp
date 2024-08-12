#include "Resh.h"

double LenS(double Xa, double Ya, double Xb, double Yb) {
	return sqrt(pow((Xa - Xb), 2) + pow((Ya - Yb), 2));
}

double CalcP(double a, double b, double c) {
	return a + b + c;
}

double CalcS(double a, double b, double c) {
	double p = CalcP(a, b, c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

double PS(double x1, double y1, double x2, double y2,
		  double x3, double y3, double& p) {
	double a, b, c, s;
	a = LenS(x1, y1, x2, y2);
	b = LenS(x3, y3, x2, y2);
	c = LenS(x1, y1, x3, y3);
	p = CalcP(a, b, c);
	s = CalcS(a, b, c);
	return s;
}

