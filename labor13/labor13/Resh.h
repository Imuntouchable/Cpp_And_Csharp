#pragma once
#include "Resh.cpp"
void FileProc(StreamReader^ sr, StreamWriter^ sw, ListBox^ lstInFile, ListBox^ lstOutFile)
{
	String^ InBuffer = "";
	String^ OutBuffer = "";
	try
	{
		while (InBuffer = sr->ReadLine())
		{
			if (InBuffer->Length == 0)
				continue;
			lstInFile->Items->Add(InBuffer);
			OutBuffer = Delit(InBuffer);
			sw->WriteLine(OutBuffer);
			lstOutFile->Items->Add(OutBuffer);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

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
		MessageBox::Show("В данной строке не нашлось запятых, введите другой текст", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
