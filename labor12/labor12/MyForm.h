#pragma once
#include "Resh.h"
namespace labor12 {

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
	private: System::Windows::Forms::TextBox^ txtString;
	private: System::Windows::Forms::TextBox^ txtPoluchstr;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->txtString = (gcnew System::Windows::Forms::TextBox());
			this->txtPoluchstr = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обрабатываемая строка";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Полученная строка";
			// 
			// txtString
			// 
			this->txtString->Location = System::Drawing::Point(45, 74);
			this->txtString->Name = L"txtString";
			this->txtString->Size = System::Drawing::Size(514, 22);
			this->txtString->TabIndex = 2;
			// 
			// txtPoluchstr
			// 
			this->txtPoluchstr->Location = System::Drawing::Point(45, 212);
			this->txtPoluchstr->Name = L"txtPoluchstr";
			this->txtPoluchstr->Size = System::Drawing::Size(514, 22);
			this->txtPoluchstr->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(423, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Выйти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 375);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPoluchstr);
			this->Controls->Add(this->txtString);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Текстовый редактор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ source = txtString->Text;
	if (source->Length == 0)
	{
		MessageBox::Show("Введите строку", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtString->Focus();
		return;
	}
	String^ res = Delit(source);
	txtPoluchstr->Text = res;
	txtString->Focus();
	txtString->SelectionStart = 0;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
