#include "pch.h"
#include <iostream>
#include <fstream>
#include "ProjectPraktic_Dll_Toguzov_A_A_BEI2202.h"
using namespace std;

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::Office::Interop;
namespace ProjectPrakticDllToguzovAABEI2202{
	void Class1::Error() {
		MessageBox::Show("Вы ответили неправильно на один или несколько вопросов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	void Class1::NoQuestion() {
		MessageBox::Show("Вы не ответили на один или несколько вопросов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	bool Class1::Question1(TextBox^ textBox1) {
		bool flag = true;
		if (textBox1->Text == "") {
			Class1::NoQuestion();
			flag = false;
		}
		else if (textBox1->Text == "1917") {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[0] = 1;
		}
		else {
			mas[0] = 0;
			Class1::Error();
		}
		return flag;

	}
	bool Class1::Question2(CheckBox^ checkBox1, CheckBox^ checkBox2, CheckBox^ checkBox3) {
		bool flag = true;
		if ((checkBox1->Checked == false) && (checkBox2->Checked == false) && (checkBox3->Checked == false)) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (checkBox2->Checked == true) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[1] = 1;
		}
		else {
			mas[1] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question3(RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3) {
		bool flag = true;
		if ((radioButton1->Checked == false) && (radioButton2->Checked == false) && (radioButton3->Checked == false)) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (radioButton1->Checked == true) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[2] = 1;
		}
		else {
			mas[2] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question4(ListBox^ listBox1, ListBox^ listBox2, ListBox^ listBox3, ListBox^ listBox4) {
		bool flag = true;
		if (listBox2->Items->Count == 0 && listBox3->Items->Count == 0 && listBox4->Items->Count == 0) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (
			listBox2->Items[0] == "Среды разработки интеллектуальных систем" &&
			listBox3->Items[0] == "Системы поддержки принятия решения" &&
			listBox4->Items[0] == "Системы генерации (текст, музыка и т.д.)"
			) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[3] = 1;
		}
		else {
			mas[3] = 0;
			Class1::Error();
		}
		return flag;
	}
	void Class1::rezult(ListBox^ listBox1, ListBox^ listBox) {
		if (listBox1->SelectedIndex == 0) {
			listBox->Items->Add(Convert::ToString(listBox1->SelectedItem));
			listBox1->Items->RemoveAt(0);
		}
		else if (listBox1->SelectedIndex == 1) {
			listBox->Items->Add(Convert::ToString(listBox1->SelectedItem));
			listBox1->Items->RemoveAt(1);
		}
		if (listBox1->SelectedIndex == 2) {
			listBox->Items->Add(Convert::ToString(listBox1->SelectedItem));
			listBox1->Items->RemoveAt(2);
		}
	}

	bool Class1::Question5(CheckBox^ checkBox1, CheckBox^ checkBox2, CheckBox^ checkBox3,
		RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3) {
		bool flag = true;
		if (((checkBox1->Checked == false) && (checkBox2->Checked == false) && (checkBox3->Checked == false)) ||
			((radioButton1->Checked == false) && (radioButton2->Checked == false) && (radioButton3->Checked == false))) {
			Class1::NoQuestion();
			flag = false;
		}
		else if ((checkBox1->Checked == true) && (checkBox3->Checked == true) && (radioButton1->Checked == true)) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[4] = 1;
		}
		else {
			mas[4] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question6(ComboBox^ comboBox1) {
		bool flag = true;
		if (comboBox1->SelectedIndex == -1) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (comboBox1->SelectedIndex == 0) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[5] = 1;
		}
		else {
			mas[5] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question7(HScrollBar^ hScrollBar1, Label^ label1) {
		bool flag = true;
		if (label1->Text == "") {
			Class1::NoQuestion();
			flag = false;
		}
		else if (hScrollBar1->Value == 1987) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[6] = 1;
		}
		else {
			mas[6] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question8(TrackBar^ trackBar1, Label^ label2) {
		bool flag = true;
		if (label2->Text == "") {
			Class1::NoQuestion();
			flag = false;
		}
		else if (trackBar1->Value == 1957) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[7] = 1;
		}
		else {
			mas[7] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question9(CheckedListBox^ checkedListBox1) {
		bool flag = true;
		if (checkedListBox1->CheckedItems->Count == 0) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (checkedListBox1->CheckedIndices->Contains(0)) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[8] = 1;
		}
		else {
			mas[8] = 0;
			Class1::Error();
		}
		return flag;
	}
	bool Class1::Question10(RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3) {
		bool flag = true;
		if ((radioButton1->Checked == false) && (radioButton2->Checked == false) && (radioButton3->Checked == false)) {
			Class1::NoQuestion();
			flag = false;
		}
		else if (radioButton1->Checked == true) {
			MessageBox::Show("Вы ответили правильно!!!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			count++;
			mas[9] = 1;
		}
		else {
			mas[9] = 0;
			Class1::Error();
		}
		return flag;
	}
	void Class1::Rez(Label^ label1) {
		label1->Text = "Вы ответили на " + (count * 10).ToString() + "% воспросов!";
	}
	void Class1::ZapisGrid(DataGridView^ grid) {
		grid->ColumnCount = 10;
		grid->RowCount = 2;
		for (int i = 0; i < 10; i++) {
			int j = i + 1;
			grid->Rows[0]->Cells[i]->Value = "[" + j + "]";
			grid->Rows[1]->Cells[i]->Value = mas[i];
		}
		int width = 0;
		int height = 0;
		for (int s = 0; s < grid->ColumnCount; s++) {
			width += grid->Columns[s]->Width;
		}
		grid->Width = width + 35;
		for (int r = 0; r < grid->RowCount; r++)
			height += grid->Rows[r]->Height;
		grid->Height = height - 35;
		if (width > 410)
			grid->Width = 410;
		else
			grid->Width = width;

		if (height > 410)
			grid->Height = 410;
		else
			grid->Height = height;
	}
	void Class1::BynarySort() {
		int x;
		int left;
		int right;
		int pivot;
		for (int i = 0; i < 10; ++i) {
			answermas[i] = mas[i];
		}
		for (int i = 0; i < 10; i++)
		{
			if (mas[i - 1] > mas[i]) {
				x = mas[i];
				left = 0;
				right = i - 1;
				do {
					pivot = (left + right) / 2;
					if (mas[pivot] < x) left = pivot + 1;
					else  right = pivot - 1;
				} while (left <= right);
				for (int j = i - 1; j >= left; j--)
					mas[j + 1] = mas[j];
				mas[left] = x;
			};
		};
	}
	void Class1::add() {
		ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
		try {
			k->Create("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\Александр\\OneDrive\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
		}
		catch (System::Runtime::InteropServices::COMException^ situation) {
			MessageBox::Show(situation->Message);
		}
		finally {
			k = nullptr;
		}
	}

	void Class1::add_struct() {
		auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\Александр\\OneDrive\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
		p->Open();
		auto c = gcnew OleDbCommand("CREATE TABLE [Massivs] ([Номер вопроса] counter, [Правильность ответа] char (200))", p);
		try {
			c->ExecuteNonQuery();
			MessageBox::Show("Структура базы данных записана");
		}
		catch (Exception^ situation) {
			MessageBox::Show(situation->Message);
		}
		p->Close();
	}

	void Class1::add_zap() {
		int j = 0;
		for (int i = 0; i < 10; i++) {
			auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.16.0;Data Source=C:\\Users\\Александр\\OneDrive\\Desktop\\вуз\\Тех_программирорвания\\NewBDmass.accdb");
			p->Open();
			if (i < 10) {
				auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + " [Правильность ответа]) VALUES('" + answermas[i] + "')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			else {
				auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + " [Правильность ответа]) VALUES('" + answermas[i] + "')");
				c->Connection = p;
				c->ExecuteNonQuery();
			}
			p->Close();
		}
		MessageBox::Show("В таблицу 'Массивы' добавлена запись");
	}
	void Class1::ZapisByn() {
		mas2d = CreateMatrix();
		ofstream ofs("datafile.bin");
		ofs << "Результаты тестирования\n";
		for (int i = 1; i < 11; i++) {
			ofs << " " << i;
		}
		ofs << "\n";
		for (int i = 0; i < 10; i++) {
			ofs << " " << answermas[i];
		}
		MessageBox::Show("Создан бинарный файл. Его можно найти в файле ProjectPrakticToguzov_A_A_BEI2202.");
	}
	int** Class1::CreateMatrix()
	{
		int** mas2d = new int* [2];
		for (int i = 0; i < 2; i++)
		{
			mas2d[i] = new int[10];
		}
		Class1::FillMatrix(mas2d);
		return mas2d;
	}
	void Class1::FillMatrix(int** mas2d)
	{
		for (int i = 1; i < 2; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mas2d[i][j] = answermas[j];
			}
		}
	}
	void Class1::ZapisWord()
	{
		auto Wrd = gcnew Word::ApplicationClass();
		Wrd->Visible = true;
		auto inf = Type::Missing;
		String^ str;
		auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);
		Wrd->Selection->TypeText("Массив полученных результатов тестирования");
		Object^ t1 = Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		Object^ t2 = Word::WdAutoFitBehavior::wdAutoFitContent;
		Word::Table^ tb1 = Wrd->ActiveDocument->Tables->Add(Wrd->Selection->Range, 2, 10, t1, t2);
		for (int j = 0; j < 10; j++)
		{
			tb1->Cell(1, j + 1)->Range->InsertAfter("[" + Convert::ToString(j + 1) + "]");
		}

		mas2d = CreateMatrix();
			for (int j = 0; j < 10; j++)
			{
				str = String::Format("{0:f0}", mas2d[1][j]);
				tb1->Cell(1 + 2, j + 1)->Range->InsertAfter(str);
			}
	}
	void Class1::ZapisByn2d() {
		mas2d = CreateMatrix();
		ofstream ofs("datafile2d.bin");
		ofs << "Результаты тестирования\n";
		for (int i = 1; i < 11; i++) {
			ofs << " " << i;
		}
		ofs << "\n";
		for (int i = 1; i < 2; i++) {
			for (int j = 0; j < 10; j++) {
				ofs << " " << mas2d[i][j];
			}
		}
		MessageBox::Show("Создан бинарный файл. Его можно найти в файле ProjectPrakticToguzov_A_A_BEI2202.");
	}
}	