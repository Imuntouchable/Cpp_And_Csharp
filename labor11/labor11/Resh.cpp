#include "main.h"
int** input(int m, int n, int a, int b)
{
	int** matr = new int* [m];
	if (a > b) {
		int t = a;
		a = b; 
		b = t;
	}
	Random^ rnd = gcnew Random;
	for (int i = 0; i < m; i++)
	{
		*(matr + i) = new int[n];
		for (int j = 0; j < n; j++)
			*(*(matr + i) + j) = rnd->Next(a, b);
	}
	return matr;
}

bool GetInt(int& x, TextBox^ Tx, String^ s)
{
	if (Tx->Text->Length == 0)
	{
		MessageBox::Show(s, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		Tx->Focus();
		return false;
	}
	x = Convert::ToInt16(Tx->Text);
	return true;
}
void output(int** mas, int m, int n, ListBox^ Lb)
{
	Lb->Items->Clear();
	for (int i = 0; i < m; i++)
	{
		String^ s = "";
		for (int j = 0; j < n; j++)
			s = s + String::Format("{0, -5:D2}", *(*(mas + i) + j));
		Lb->Items->Add(s);
	}
}

void del(int** a, int m)
{
	for (int i = 0; i < m; i++)
		delete[] * (a + i);
	delete[] a;
}