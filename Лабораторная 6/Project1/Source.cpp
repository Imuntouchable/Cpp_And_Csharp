#include <iostream>
using namespace std;
void Get(float& a, float& b, float& h1, float& a1, float& b1, float& h2);
void Put(float zmin);
float RegCikl2(float a, float b, float h1, float a1, float b1, float h2,
	float& zmin);
void main()
{
	float a, b, h1, a1, b1, h2, zmin = 0.0;
	Get(a, b, h1, a1, b1, h2);
	RegCikl2(a, b, h1, a1, b1, h2, zmin);
	Put(zmin);
	system("PAUSE");
}
void Get(float& a, float& b, float& h1, float& a1, float& b1, float& h2)
{
	setlocale(LC_ALL, "rus");
	cout << "Введите нижнюю границу отрезка изменения a: ";
	cin >> a;
	cout << "Введите верхнюю границу отрезка изменения b: ";
	cin >> b;
	cout << "Введите шаг изменения h1: ";
	cin >> h1;
	cout << "Введите нижнюю границу отрезка изменения c: ";
	cin >> a1;
	cout << "Введите верхнюю границу отрезка изменения d: ";
	cin >> b1;
	cout << "Введите шаг изменения h2: ";
	cin >> h2;
}
void Put(float zmin)
{
	setlocale(LC_ALL, "rus");
	cout << endl << "Минимальное значение функции: " << zmin << endl;
}
float RegCikl2(float a, float b, float h1, float a1, float b1, float h2,
	float& zmin)
{
	setlocale(LC_ALL, "rus");
	int n1 = int((b + h1 / 2 - a) / h1) + 1;
	int n2 = int((b1 + h2 / 2 - a1) / h2) + 1;
	float x, y, z;
	cout << endl << "Таблица значений функции" << endl;
	cout << "\tx\ty\tz" << endl;
	for (int i = 1; i <= n1; i++)
	{
		x = a + (i - 1) * h1;
		for (int j = 1; j <= n2; j++)
		{
			y = a1 + (j - 1) * h2;
			z = x - y - x/y;
			if (z < zmin)
				zmin = z;
			cout << "\t" << x << "\t" << y << "\t" << z << endl;
		}
	}
	return zmin;
}