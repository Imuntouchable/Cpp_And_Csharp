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
void VivodABC(double a, double b, double c)
{
	setlocale(LC_ALL, "rus");
	cout << "«начение A= arccos " << a << endl;
	cout << "«начение B= arccos " << b << endl;
	cout << "«начение C= arccos " << c << endl;
}
void VichisABC(double& ot11, double& ot22, double& ot33, double a, double b, double c)
{
	ot11 = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
	ot22 = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c));
	ot33 = acos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * b * a));
}