#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;

int main()
{
	setlocale (LC_ALL, "rus");
	double x = 4213,
		   y = 1042.654;

	double d = ((1 - tan(x) * pow(y, 2)) / (pow(x, 1.0/3.0))) + (4*sqrt(pow(x, 2) - 0.1));

	int k = d,
		l = static_cast<int>(d),
		m = ceil(d),
		n = floor(d);
	cout<<endl<<"������������ d= "<<d;
	cout<<endl<<"����� ����� ���������� (������) k= "<<k;
	cout<<endl<<"����� ����� ���������� (������) l= "<<l;
	cout<<endl<<"����������� � ������� ������� m= "<<m;
	cout<<endl<<"����������� � ������� ������� n= "<<n<<endl;
	cout<<endl<<"�������� ����������� ���������� ++k= "<<++k;
	cout<<endl<<"�������� ������������ ���������� l++= "<<l++;
	cout<<endl<<"�������� k ����� ���������� = "<<k;
	cout<<endl<<"�������� l ����� ���������� = "<<l<<endl<<endl;
	system("PAUSE");
	return 0;
