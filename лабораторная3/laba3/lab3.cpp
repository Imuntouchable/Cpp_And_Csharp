#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#include "math.h"
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	double x, y, d;
	cout<<" ¬вод x= ";
	cin>>x;
	cout<<endl<<"¬вод y= ";
	cin>>y;
	d = function2(x, y);
	cout<<endl<<"результат d= "<<d<<endl;
	system("PAUSE");
	return 0;
}
double function2(double x, double y)
{
	double d; 
	d = (1 - tan(x) * pow(y, 2)) / (pow(x, 1.0/3.0)) + (4 * sqrt(sqrt(pow(x, 2) - 0.1));
	return d;
}