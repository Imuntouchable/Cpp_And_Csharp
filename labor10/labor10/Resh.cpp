#pragma once
#include "mainvich.h"

int x = 0;
int chet = 0;
int nechet = 0;
int taskch(int* mas, int n)
{
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 == 0)
		{
			chet += 1;
		}
		if (mas[i] % 2 != 0)
		{
			nechet += 1;
			x = mas[i];
		}
	}
	return 0;
}
int* task(int* mas, int n, int& m)
{
	taskch(mas, n);
	if (chet > 0 && nechet > 0)
	{
		m = chet;
		int* newmas = new int[m];
		int k = 0;
		if (m == 0) return 0;
		for (int i = 0; i < n;i++)
		{
			if (mas[i] % 2 == 0)
			{
				*(newmas + k) = *(mas + i) - x;
				k++;
			}
		}
		return newmas;
	}
}