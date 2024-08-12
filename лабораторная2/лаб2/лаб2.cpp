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
	cout<<endl<<"Вещественное d= "<<d;
	cout<<endl<<"Целая часть результата (неявно) k= "<<k;
	cout<<endl<<"Целая часть результата (неявно) l= "<<l;
	cout<<endl<<"Округленное в большую сторону m= "<<m;
	cout<<endl<<"Округленное в меньшую сторону n= "<<n<<endl;
	cout<<endl<<"Значение префиксного инкремента ++k= "<<++k;
	cout<<endl<<"Значение постфиксного инкремента l++= "<<l++;
	cout<<endl<<"Значение k после приращения = "<<k;
	cout<<endl<<"Значение l после приращения = "<<l<<endl<<endl;
	system("PAUSE");
	return 0;
