#include "tchar.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

void FileProc(StreamReader^, StreamWriter^, ListBox^, ListBox^);
String^ Delit(String^);
String^ DelSpace(String^);
String^ GetString(array<String^>^);