#pragma once
#include "main.h"
namespace labor11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtM;
	private: System::Windows::Forms::TextBox^ txtN;

	private: System::Windows::Forms::TextBox^ txtB;




	private: System::Windows::Forms::ListBox^ lstMatr1;
	private: System::Windows::Forms::ListBox^ lstMatr2;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtA;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtM = (gcnew System::Windows::Forms::TextBox());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->lstMatr1 = (gcnew System::Windows::Forms::ListBox());
			this->lstMatr2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(238, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Диапазон случайных чисел";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"левая граница a";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(66, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Исходная матрица";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(302, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"правая граница b";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(302, 199);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Полученная матрица";
			// 
			// txtM
			// 
			this->txtM->Location = System::Drawing::Point(172, 50);
			this->txtM->Name = L"txtM";
			this->txtM->Size = System::Drawing::Size(100, 22);
			this->txtM->TabIndex = 8;
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(430, 47);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 22);
			this->txtN->TabIndex = 9;
			// 
			// txtB
			// 
			this->txtB->Location = System::Drawing::Point(430, 128);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(100, 22);
			this->txtB->TabIndex = 11;
			// 
			// lstMatr1
			// 
			this->lstMatr1->FormattingEnabled = true;
			this->lstMatr1->ItemHeight = 16;
			this->lstMatr1->Location = System::Drawing::Point(69, 218);
			this->lstMatr1->Name = L"lstMatr1";
			this->lstMatr1->Size = System::Drawing::Size(148, 148);
			this->lstMatr1->TabIndex = 12;
			// 
			// lstMatr2
			// 
			this->lstMatr2->FormattingEnabled = true;
			this->lstMatr2->ItemHeight = 16;
			this->lstMatr2->Location = System::Drawing::Point(305, 218);
			this->lstMatr2->Name = L"lstMatr2";
			this->lstMatr2->Size = System::Drawing::Size(148, 148);
			this->lstMatr2->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(501, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(501, 343);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Выйти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(227, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 16);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Размер исходной матрицы";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(66, 50);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 16);
			this->label10->TabIndex = 20;
			this->label10->Text = L"число строк m";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(300, 50);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"число столбцов n";
			// 
			// txtA
			// 
			this->txtA->Location = System::Drawing::Point(172, 134);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(100, 22);
			this->txtA->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 392);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lstMatr2);
			this->Controls->Add(this->lstMatr1);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtA);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->txtM);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Двумерные динамические массивы";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	lstMatr1->Items->Clear();
	lstMatr2->Items->Clear();
	int m, n;
	int a, b;
	if (!GetInt(m, txtM, "Введите число строк матрицы")) return;
	if (!GetInt(n, txtN, "Введите число столбцов матрицы")) return;
	if (!GetInt(a, txtA, "Введите левую границу диапазона")) return;
	if (!GetInt(b, txtB, "Введите правую границу диапазона")) return;
	int** matr = input(m, n, a, b);
	output(matr, m, n, lstMatr1);
	int k;
	int** Matr2 = task(matr, m, n, k);
	if (Matr2)
	{
		output(Matr2, k, n, lstMatr2);
		del(Matr2, k);
	}
	else
		MessageBox::Show("Новый массив не создан");
	del(matr, m);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
