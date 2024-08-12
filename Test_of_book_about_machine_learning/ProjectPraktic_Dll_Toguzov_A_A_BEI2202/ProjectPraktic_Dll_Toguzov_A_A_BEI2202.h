#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace ProjectPrakticDllToguzovAABEI2202 {
	public ref class Class1
	{
		static Class1() {
			mas = new int[10];
			answermas = new int[10];
		}

		public:
			static int count = 0;
			static int* mas;
			static int* answermas;
			static int** mas2d;
			static void Error();
			static void NoQuestion();
			static bool Class1::Question1(TextBox^ textBox1);
			static bool Class1::Question2(CheckBox^ checkBox1, CheckBox^ checkBox2, CheckBox^ checkBox3);
			static bool Class1::Question3(RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3);
			static bool Class1::Question4(ListBox^ listBox1, ListBox^ listBox2, ListBox^ listBox3, ListBox^ listBox4);
			static void Class1::rezult(ListBox^ listBox1, ListBox^ listBox);
			static bool Class1::Question5(CheckBox^ checkBox1, CheckBox^ checkBox2, CheckBox^ checkBox3, RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3);
			static bool Class1::Question6(ComboBox^ comboBox1);
			static bool Class1::Question7(HScrollBar^ hScrollBar1, Label^ label1);
			static bool Class1::Question8(TrackBar^ trackBar1, Label^ label2);
			static bool Class1::Question9(CheckedListBox^ checkedListBox1);
			static bool Class1::Question10(RadioButton^ radioButton1, RadioButton^ radioButton2, RadioButton^ radioButton3);
			static void Class1::Rez(Label^ label1);
			static void Class1::ZapisGrid(DataGridView^ dataGridView1);
			static void Class1::BynarySort();
			static void add();
			static void add_struct();
			static void add_zap();
			static void ZapisByn();
			static void FillMatrix(int** mas2d);
			static int** CreateMatrix();
			static void ZapisWord();
			static void ZapisByn2d();
	};
}
