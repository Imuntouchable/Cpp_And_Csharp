#include "pch.h"
#include "TP_Toguzov_BEI2202Dll.h"
#include"math.h"
#include <cstdlib>
#include <time.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
namespace LabsDll {
	//Лабораторная 1
	double Class1::VichisABC(double a, double b, double c)
	{
		double u = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c));
		return u;
	}
	void Class1::Vichis(double& alpha, double& beta, double& gamma, double a, double b, double c)
	{
		alpha = VichisABC(a, b, c);
		beta = VichisABC(b, c, a);
		gamma = VichisABC(c, a, b);
	}
	double Class1::Input(TextBox^ t) {
		return Convert::ToDouble(t->Text);
	}

	void Class1::Output(double alpha, double beta, double gamma, TextBox^ t1, TextBox^ t2, TextBox^ t3) {
		t1->Text = Convert::ToString(alpha);
		t2->Text = Convert::ToString(beta);
		t3->Text = Convert::ToString(gamma);
	}


	//Лабораторная 2
	void Class1::input(int* mas, int num) {
		srand(time(0));
		for (int i = 0; i < num; i++) {
			mas[i] = (int)(rand() % 79) - 30;
		}
	}

	void Class1::output(int* mas, int len, DataGridView^ grid) {
		grid->ColumnCount = len;
		grid->RowCount = 2;
		for (int i = 0; i < len; i++) {
			grid->Rows[0]->Cells[i]->Value = "[" + i + "]";
			grid->Rows[1]->Cells[i]->Value = mas[i];
		}
		int width = 0;
		for (int s = 0; s < grid->ColumnCount; s++) {
			width += grid->Columns[s]->Width;
			if (width > 200)
				grid->Width = 200;
			else
				grid->Width = width + 10;
		}
	}

	double Class1::summa(int* mas, int num) {
		double answer = 0;
		for (int i = 0; i < num; i++) {
			if (i % 2 == 0 && mas[i] > 0) {
				answer = answer + sqrt(mas[i]);
			}
		}
		return answer;
	}

	void Class1::newmas(int* mas, int* answermas, int num, double sumsqrt, int& j) {
		j = 0;
		for (int i = 0; i < num; i++) {
			if (mas[i] < sumsqrt) {
				answermas[j] = mas[i];
				j++;
			}
		}
	}

	// Лабораторная 3
	void Class1::add() {
		ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
		try {
			k->Create("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\123\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
		}
		catch (System::Runtime::InteropServices::COMException^ situation) {
			MessageBox::Show(situation->Message);
		}
		finally {
			k = nullptr;
		}
	}

	void Class1::add_struct() {
		auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\123\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
		p->Open();
		auto c = gcnew OleDbCommand("CREATE TABLE [Massivs] ([Номер элемента] counter, [Исходный массив] char (200), [Результирующий массив] char(200))", p);
		try {
			c->ExecuteNonQuery();
			MessageBox::Show("Структура базы данных записана");
		}
		catch (Exception^ situation) {
			MessageBox::Show(situation->Message);
		}
		p->Close();
	}

	void Class1::add_zap(int* mas, int* answermas, int len, int j) {
		for (int i = 0; i < len; i++) {
			auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\123\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
			p->Open();
			if (i < j) {
				auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + " [Исходный массив], [Результирующий массив]) VALUES('" + mas[i] + "','" + answermas[i] + "')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			else {
				auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + " [Исходный массив], [Результирующий массив]) VALUES('" + mas[i] + "','" + answermas[i] + "')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			p->Close();
		}
		MessageBox::Show("В таблицу 'Массивы' добавлена запись");
	}

	// Лабораторная 4
	void Class1::zapisword(int* mas, int* rezmas, int n, int j) {
		auto Wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
		Wrd->Visible = true;
		auto inf = Type::Missing;
		String^ str;
		auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);
		Wrd->Selection->TypeText("Исходный массив");
		Wrd->Selection->TypeParagraph();
		Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
		Wrd->Selection->TypeParagraph();
		Wrd->Selection->TypeParagraph();
		Microsoft::Office::Interop::Word::Table^ tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[2]->Range, 2, n, t1, t2);
		for (int i = 0; i < n; i++)
		{
			tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
			str = String::Format("{0:f0}", mas[i]);
			tbl->Cell(2, i + 1)->Range->InsertAfter(str);
		}
		String^ str2;
		Wrd->Selection->TypeText("Результирующий массив");
		Microsoft::Office::Interop::Word::Table^ tbl2 = Wrd->ActiveDocument->Tables->Add(Wrd->Selection->Range, 2, j, t1, t2);
		for (int i = 0; i < j; i++)
		{
			tbl2->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
			str2 = String::Format("{0:f0}", rezmas[i]);
			tbl2->Cell(2, i + 1)->Range->InsertAfter(str2);
		}
	}

	//Лабораторная 5
	void Class1::mon(int* mas, int num, bool monotony) {
		int Flag = 1;
		int i = 1;
		for (int j = 0; j < num; j++)
		{
			if ((i <= num) && (Flag == 1)) {
				if (mas[j] >= mas[j + 1]) {
					i = i + 1;
				}
				else {
					Flag = 0;
				};
			};
		};
		if (Flag == 1) {
			MessageBox::Show("Данная последовательность монотонно убывающая", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Данная последовательность не монотонно убывающая", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	void Class1::pos(int* mas, int num, int positive) {
		int Flag = 1;
		for (int i = 0; i < num; i++)
		{
			if ((mas[i] >= 0) && (Flag == 1)) {
				Flag = 0;
				positive = mas[i];
			};
		};
		if (Flag == 0) {
			MessageBox::Show("Первый положительный элемент исходного массива:" + Convert::ToString(positive), "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("В данном массиве нет положительных элементов", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	// лабораторная 6
	void Class1::zapisexcel(int* mas, int* rezmas, int n, int j) {
		auto XL = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
        XL->Visible = true;
		Object^ t = Type::Missing;
		auto Workbook = XL->Workbooks->Add(t); 
		String^ str;
		XL->Cells[1, 1] = "Исходный массив";
		for (int i = 0; i < n; i++)
		{
			XL->Cells[2, i + 1] = Convert::ToString(i); 
			str = String::Format("{0:f0}", mas[i]);
			XL->Cells[3, i + 1] = str;
		}
		XL->Cells[5, 1] = "Результирующий массив";
		for (int i = 0; i < j; i++)
		{
			XL->Cells[6, i + 1] = Convert::ToString(i);
			str = String::Format("{0:f0}", rezmas[i]);
			XL->Cells[7, i + 1] = str;
		}
	}
	// Лабораторная 7
	void Class1::FillMatrix(int** matrix, int rows, int cols)
	{
		srand(time(NULL));

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				matrix[i][j] = (rand() % 150) + (-50);
			}
		}
	}

	void Class1::output_matr(int** matr, int n, int m, DataGridView^ grid)
	{
		grid->RowCount = n + 1;
		grid->ColumnCount = m + 1;

		for (int i = 0; i < n; i++)
			grid->Rows[i + 1]->Cells[0]->Value = "[" + i + "]";

		for (int j = 0; j < m; j++)
			grid->Rows[0]->Cells[j + 1]->Value = "[" + j + "]";

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				grid->Rows[i + 1]->Cells[j + 1]->Value = matr[i][j];

		int sum1 = 0, sum2 = 0;

		for (int s = 0; s < grid->ColumnCount; s++)
			sum1 += grid->Columns[s]->Width;

		if (sum1 > 730)
			grid->Width = 730;
		else
			grid->Width = sum1 + 3;

		for (int r = 0; r < grid->RowCount; r++)
			sum2 += grid->Rows[r]->Height;

		if (sum2 > 230)
			grid->Height = 230;
		else
			grid->Height = sum2 + 3;
	}


	int** Class1::CreateMatrix(int rows, int cols)
	{
		int** Matr = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			Matr[i] = new int[cols];
		}
		Class1::FillMatrix(Matr, rows, cols);
		return Matr;
	}


	int Class1::CompareFunction(int** source_matrix, int rows, int cols, int choice_col)
	{
		int sum = 0;

		for (int i = 0; i < rows; i++)
		{
			sum += source_matrix[i][choice_col];
		}

		return sum;
	}


	int* Class1::CreateNewArray(int** source_matrix, int rows, int cols, int choice_col, int& new_size)
	{
		int compare_sum = Class1::CompareFunction(source_matrix, rows, cols, choice_col);

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (source_matrix[i][j] > compare_sum)
				{
					new_size += 1;
				}
			}
		}

		if (new_size <= 0)
		{
			MessageBox::Show(L"Исходный массив не содержит отрицательных значений.", L"Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return nullptr;
		}


		int* new_array = new int[new_size];

		for (int i = 0, k = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (source_matrix[i][j] > compare_sum)
				{
					new_array[k] = source_matrix[i][j];
					++k;
				}
			}
		}
		return new_array;

	}
	void Class1::cleaner(int** mas, int n) {
		for (int i = 0; i < n; i++) {
			delete[](mas[i]);
		}
		delete[] mas;
	}
}
