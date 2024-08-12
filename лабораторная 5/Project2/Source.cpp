#include <iostream>
#include <cmath>
using namespace std;
void GetXYZ(double&, double&, double&);
void PutRN(double, int);
double Razv(double, double, double, int&);
double Razm(double, double, double, int&);
int main()
{
	double x, y, a, r;
	int n; 
	GetXYZ(x, y, a); 
	int choice; 
	cout << " Каким способом решать задачу?\n";
	cout << " 1 - с вложенными разветвлениями ";
	cout << " без дополнительных функций max и min \n ";
	cout << "2 - со своими функциями minMy и maxMy \n ";
	cout << " Что выбираете 1 или 2 ?\n ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		r = Razv(x, y, a, n);
		break;
	case 2:
		r = Razm(x, y, a, n);
		break;
	default:
		cout << " Вы ввели что-то не то! ";
		cout << endl;
		system("PAUSE");
		return 0;
	}
	PutRN(r, n);
	system("PAUSE");
	return 0;
}

void GetXYZ(double& x, double& y, double& a)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите x, y, a\n ";
	cin >> x >> y >> a;
}
void PutRN(double R, int N)
{
	setlocale(LC_ALL, "rus");
	cout << " Ответ R= " << R << endl;
	cout << " Номер ветки разветвления " << N << endl;
}
double Razv(double x, double y, double a, int& n)
{
	double r;
	if (y > 2 && x > 0)
	{
		r = x + sqrt(a);
		n = 1;
	}
	else
		if (y <= 2 && x < 0)
		{
			r = a * x;
			double r1 = y, r2 = sin(x*y);
			if (r > r2)
				r = r2; 
			if (r > r1)
				r = r1;
			n = 2;
		}
		else
		{
			r = exp(x);
			if (r < (x + a * y))
				r = x + a * y;
			n = 3;
		}
	return r;
}
double maxMy(double, double);
double minMy(double, double, double);
double Razm(double x, double y, double a, int& n)
{
	if (y > 2 && x > 0)
	{
		n = 1;
		return x + sqrt(a);
	}
	else if (y <= 2 && x < 0)
	{
		n = 2;
		return minMy(a*x, y, sin(x * y));
	}
	else
	{
		n = 3;
		return maxMy(exp(x), x + a*y);
	}
}
double maxMy(double x, double y)
{
	double f;
	if (x > y) 
		f = x; 
	else 
		f = y;
	return f;
}
double minMy(double x, double y, double a)
{
	double f;
	f = x;
	if (f > y)
		f = y;
	if (f > a)
		f = y;
	return f;
}