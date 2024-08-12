#pragma once
using namespace System;
using namespace System::Windows::Forms;
int** input(int m, int n, int a, int b);
bool GetInt(int&, TextBox^, String^);
void output(int**, int m, int n, ListBox^);
int** task(int**, int, int, int&);
int analysmatr(int**, int, int, int&, int&);
bool analys(int*, int);
void del(int**, int);