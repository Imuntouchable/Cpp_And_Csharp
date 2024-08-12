#include <iostream>
#include <cmath>
using namespace std;
void GetXY(float&, float&);
void GetABC(float&, float&, float&, float&, float&, float&);
void Put(bool, float, float);
bool ot1(float, float, float, float, float, float, float, float);
bool ot2(float, float, float, float, float, float, float, float);
bool ot3(float, float, float, float, float, float, float, float);
int main()
{
	float x, y;
	float x1, y1, x2, y2, x3, y3;
	bool p1, p2, p3;
	GetXY(x, y);
	GetABC(x1, y1, x2, y2, x3, y3);
	cout << " Решение 1-й функции:" << endl;
	p1 = ot1(x, y, x1, y1, x2, y2, x3, y3);
	Put(p1, x, y);
	cout << " \nРешение 2-й функции:" << endl;
	p2 = ot2(x, y, x1, y1, x2, y2, x3, y3);
	Put(p2, x, y);
	cout << "\n Решение 3-й функции:" << endl;
	p3 = ot3(x, y, x1, y1, x2, y2, x3, y3);
	Put(p1, x, y);
	system("PAUSE");
	return 0;
}
bool ot1(float x, float y, float x1, float x2, float x3, float y1, float y2, float y3)
{
	if (((x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y)) == 0 || ((x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y)) == 0 || ((x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y)) == 0)
		return true;
	else
		return false;
}
bool ot2(float x, float y, float x1, float x2, float x3, float y1, float y2, float y3)
{
	if (((x1 - x) *(y2 - y1) - (x2 - x1) * (y1 - y)) != 0)
		if (((x2 - x) *(y3 - y2) - (x3 - x2) * (y2 - y)) != 0)
			if (((x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y)) != 0)
				return false;
	return true;
}
bool ot3(float x, float y, float x1, float x2, float x3, float y1, float y2, float y3)
{
	return (((x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y)) == 0 || ((x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y)) == 0 || ((x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y)) == 0);
}
void GetXY(float& x, float& y)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите координаты точки x, y\n ";
	cin >> x >> y;
}
void GetABC(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
	setlocale(LC_ALL, "rus");
	cout << " Введите координаты вершин треугольника A B C\n ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}
void Put(bool b, float x, float y)
{
	setlocale(LC_ALL, "rus");
	cout << " Точка с координатами ( " << x << " ," << y << " )" << endl;
	if (b)
		cout << "попала на сторону треугольника" << endl;
	else
		cout << "не попала на сторону треугольника" << endl;
}