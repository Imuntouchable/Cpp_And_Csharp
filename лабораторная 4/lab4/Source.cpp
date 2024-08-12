#include <iostream>
#include "Source1.cpp"
void GetABC(double&, double&, double&);
double Vichis(double&, double&, double&);
void VichisABC(double&, double&, double&);
void VivodABC(double, double, double);
int main()
{
	double ot1 = 0, ot2 = 0, ot3 = 0, a, b, c;
	GetABC(a, b, c);
	VichisABC(ot1, ot2, ot3);
	VivodABC(ot1, ot2, ot3);
	system("PAUSE");
}