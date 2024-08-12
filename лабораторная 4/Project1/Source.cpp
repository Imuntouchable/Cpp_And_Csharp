#include <iostream>
#include "Header.h"
void GetABC(double&, double&, double&);
void VivodABC(double, double, double);
void VichisABC(double&, double&, double&, double, double, double);
int main()
{
	double a, b, c, ot1, ot2, ot3;
	GetABC(a, b, c);
	VichisABC(ot1, ot2, ot3, a, b, c);
	VivodABC(ot1, ot2, ot3);
	system("PAUSE");
}