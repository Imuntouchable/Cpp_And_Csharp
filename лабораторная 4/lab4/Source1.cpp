#include <iostream>
using namespace std;
void GetABC(double& a, double& b, double& c)
{
	setlocale(LC_ALL, "rus");
	cout << "¬ведите значение a: ";
	cin >> a;
	cout << "¬ведите значение b: ";
	cin >> b;
	cout << "¬ведите значение c: ";
	cin >> c;
}
double Vichis(double& a, double& b, double& c)
{
	double u = acos(pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c);
	return u;
}
void VichisABC(double& a, double& b, double& c)
{
	a = Vichis(a, b, c);
	b = Vichis(b, c, a);
	c = Vichis(c, a, b);
}
void VivodABC(double a, double b, double c)
{
	setlocale(LC_ALL, "rus");
	cout << "«начение A= " << a << endl;
	cout << "«начение B= " << b << endl;
	cout << "«начение C= " << c << endl;
}