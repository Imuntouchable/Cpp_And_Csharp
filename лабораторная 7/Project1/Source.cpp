#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int Vich(int& n)
{
	setlocale(LC_ALL, "rus");
	float z = 1.0;
	cout << "\tномер   \tзначение " << endl;
	while (z <= 4)
	{
		n++;
		z += 1/sqrt(n);
		cout << '\t' << n << '\t' << '\t' << z << endl;
	}
	return n;
}

void PUT(int n) 
{
	cout << "Минимальное значение: " << n << endl;
}
int main() 
{
	int n = 1;
	Vich(n);
	PUT(n);
	system("PAUSE");
	return 0;
}

