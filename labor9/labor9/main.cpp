#pragma once

#include "mainvich.h"


using namespace System;
using namespace System::Windows::Forms;

void Input(int mas[], int n, int a, int b)
{
    Random^ random = gcnew Random();

    for (int i = 0; i < n; i++)
        mas[i] = random->Next(a, b);
}
void Output(int mas[], int n, ListBox^ Lb)
{
    Lb->Items->Clear();
    for (int i = 0; i < n; i++)
        Lb->Items->Add(mas[i]);
}
bool GetInt(const int max_val, TextBox^ tn, String^ s, int& n) {
    if (tn->Text->Length == 0) {
        MessageBox::Show(s, "Oøèáêà Bâoäa", MessageBoxButtons::OK, MessageBoxIcon::Error);
        tn->Focus();
        return false;
    }
    n = Convert::ToInt32(tn->Text);
    if (n< 1 || n > max_val) {
        MessageBox::Show(s, "Oøèáêa Bâoäa", MessageBoxButtons::OK, MessageBoxIcon::Error);
        tn->Focus();
        return false;
    }
    return true;
}