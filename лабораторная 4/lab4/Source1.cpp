#include <iostream>
using namespace std;
void GetABC(double& a, double& b, double& c)
{
	setlocale(LC_ALL, "rus");
	cout << "������� �������� a: ";
	cin >> a;
	cout << "������� �������� b: ";
	cin >> b;
	cout << "������� �������� c: ";
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
	cout << "�������� A= " << a << endl;
	cout << "�������� B= " << b << endl;
	cout << "�������� C= " << c << endl;
}