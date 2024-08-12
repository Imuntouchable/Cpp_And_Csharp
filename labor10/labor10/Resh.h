#pragma once
#include "mainvich.h"
int* input(int& n, TextBox^ TB)
{
	if ((n = TB->Lines->Length) == 0)
	{
		MessageBox::Show("Заполните числами текстовое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		TB->Focus();
		return 0;
	}
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		String^ s = TB->Lines[i];
		*(mas+i) = Convert::ToInt32(s);
	}
	return mas;
}
void output(int* mas, int n, ListBox^ Lb)
{
	Lb->Items->Clear();
	for (int i = 0; i < n; i++)
	{
		String^ s = (*(mas + i)).ToString();
		Lb->Items->Add(s);
	}
	if (n == 0) {
		MessageBox::Show("В списке нет либо четных, либо нечетных чисел", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}