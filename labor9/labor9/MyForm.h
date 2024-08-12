#pragma once
#include "mainvich.h"
namespace labor9 {

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
	private: System::Windows::Forms::TextBox^ razmer;
	private: System::Windows::Forms::TextBox^ ot_a;
	private: System::Windows::Forms::TextBox^ do_b;
	private: System::Windows::Forms::ListBox^ Ischmas;
	private: System::Windows::Forms::ListBox^ Poluchmas;
	protected:

	protected:





	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ Размер;
	private: System::Windows::Forms::Button^ Cloce;
	private: System::Windows::Forms::Button^ Vichislit;



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
			this->razmer = (gcnew System::Windows::Forms::TextBox());
			this->ot_a = (gcnew System::Windows::Forms::TextBox());
			this->do_b = (gcnew System::Windows::Forms::TextBox());
			this->Ischmas = (gcnew System::Windows::Forms::ListBox());
			this->Poluchmas = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Размер = (gcnew System::Windows::Forms::Label());
			this->Cloce = (gcnew System::Windows::Forms::Button());
			this->Vichislit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// razmer
			// 
			this->razmer->Location = System::Drawing::Point(181, 78);
			this->razmer->Name = L"razmer";
			this->razmer->Size = System::Drawing::Size(100, 22);
			this->razmer->TabIndex = 0;
			// 
			// ot_a
			// 
			this->ot_a->Location = System::Drawing::Point(281, 211);
			this->ot_a->Name = L"ot_a";
			this->ot_a->Size = System::Drawing::Size(100, 22);
			this->ot_a->TabIndex = 1;
			// 
			// do_b
			// 
			this->do_b->Location = System::Drawing::Point(514, 211);
			this->do_b->Name = L"do_b";
			this->do_b->Size = System::Drawing::Size(100, 22);
			this->do_b->TabIndex = 2;
			// 
			// Ischmas
			// 
			this->Ischmas->FormattingEnabled = true;
			this->Ischmas->ItemHeight = 16;
			this->Ischmas->Location = System::Drawing::Point(40, 334);
			this->Ischmas->Name = L"Ischmas";
			this->Ischmas->Size = System::Drawing::Size(120, 148);
			this->Ischmas->TabIndex = 3;
			// 
			// Poluchmas
			// 
			this->Poluchmas->FormattingEnabled = true;
			this->Poluchmas->ItemHeight = 16;
			this->Poluchmas->Location = System::Drawing::Point(226, 334);
			this->Poluchmas->Name = L"Poluchmas";
			this->Poluchmas->Size = System::Drawing::Size(120, 148);
			this->Poluchmas->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Диапозон значений";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Исходный массив";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(223, 311);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Полученный массив";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(316, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"А";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(545, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"В";
			// 
			// Размер
			// 
			this->Размер->AutoSize = true;
			this->Размер->Location = System::Drawing::Point(24, 78);
			this->Размер->Name = L"Размер";
			this->Размер->Size = System::Drawing::Size(57, 16);
			this->Размер->TabIndex = 13;
			this->Размер->Text = L"Размер";
			// 
			// Cloce
			// 
			this->Cloce->Location = System::Drawing::Point(629, 434);
			this->Cloce->Name = L"Cloce";
			this->Cloce->Size = System::Drawing::Size(98, 23);
			this->Cloce->TabIndex = 14;
			this->Cloce->Text = L"Выйти";
			this->Cloce->UseVisualStyleBackColor = true;
			this->Cloce->Click += gcnew System::EventHandler(this, &MyForm::Cloce_Click);
			// 
			// Vichislit
			// 
			this->Vichislit->Location = System::Drawing::Point(439, 434);
			this->Vichislit->Name = L"Vichislit";
			this->Vichislit->Size = System::Drawing::Size(109, 23);
			this->Vichislit->TabIndex = 15;
			this->Vichislit->Text = L"Вычислить";
			this->Vichislit->UseVisualStyleBackColor = true;
			this->Vichislit->Click += gcnew System::EventHandler(this, &MyForm::Vichislit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(851, 519);
			this->Controls->Add(this->Vichislit);
			this->Controls->Add(this->Cloce);
			this->Controls->Add(this->Размер);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Poluchmas);
			this->Controls->Add(this->Ischmas);
			this->Controls->Add(this->do_b);
			this->Controls->Add(this->ot_a);
			this->Controls->Add(this->razmer);
			this->Name = L"MyForm";
			this->Text = L"Одномерные автоматические массивы";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Cloce_Click(System::Object^ sender, System::EventArgs^ e) {
	this -> Close();
}
private: System::Void Vichislit_Click(System::Object^ sender, System::EventArgs^ e) {
	const int N = 100;
	int mas1[N], mas2[N];
	int n1, n2;
	int a, b, x = 0;

	if (!GetInt(N, razmer, "Введите n:", n1)) return;
	if (!GetInt(1000, ot_a, "Введите a:", a)) return;
	if (!GetInt(1000, do_b, "Введите b:", b)) return;

	Input(mas1, n1, a, b);
	Output(mas1, n1, Ischmas);
	n2 = task(mas1, mas2, x, n1);
	if (n2)
		Output(mas2, n2, Poluchmas);
	else
		MessageBox::Show("В исходном массиве либо нет четных чисел, либо нет нечетных", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
