#pragma once
using namespace System;
using namespace System::Windows::Forms;

void Input(int mas[], int n, int a, int b);
void Output(int mas[], int n, ListBox^ Lb);
bool GetInt(const int max_val, TextBox^ tn, String^ s, int& n);
int task(int mas[], int new_mas[], int& x, int n);
int chetnechet(int& x, int& chet, int& nechet, int n, int mas[]);