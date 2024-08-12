#pragma once
#include "Resh.cpp"
String^ Delit(String^ str)
{
	if (str->Contains(","))
	{
		str = DelSpace(str);
		array <TCHAR>^ dlm = { ' ' };
		array <String^>^ words = str->Split(dlm);
		return GetString(words);
	}
	else
		MessageBox::Show("� ������ ������ �� ������� �������, ������� ������ �����", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

String^ DelSpace(String^ str)
{
	str = str->Replace(",", " ");
	str = str->Trim();
	while (str->IndexOf("  ") >= 0)
		str = str->Replace("  ", " ");
	return str;
}

String^ GetString(array<String^>^ arr)
{
	String^ newstring = "";
	for each (String ^ s in arr)
	{
		int dlinnasl = 0;
		int chislopr = 0;
		dlinnasl = s->Length;
		chislopr = 10 - dlinnasl;
		newstring = newstring + s;
		for (int i = 0; i < chislopr; i++)
		{
			newstring += " ";
		}
	}
	return newstring;
}
