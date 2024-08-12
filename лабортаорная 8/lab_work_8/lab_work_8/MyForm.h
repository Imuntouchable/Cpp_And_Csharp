#pragma once
#include "Resh.h"
namespace labwork8 {

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
	private: System::Windows::Forms::Button^ cmdCalc;
	private: System::Windows::Forms::Button^ cmdExit;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtX1;
	private: System::Windows::Forms::TextBox^ txtX2;
	private: System::Windows::Forms::TextBox^ txtX3;
	private: System::Windows::Forms::TextBox^ txtY1;
	private: System::Windows::Forms::TextBox^ txtY2;
	private: System::Windows::Forms::TextBox^ txtY3;
	private: System::Windows::Forms::TextBox^ txtPttr;
	private: System::Windows::Forms::TextBox^ txtPltr;









	protected:




















	protected:













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
			this->cmdCalc = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtX1 = (gcnew System::Windows::Forms::TextBox());
			this->txtX2 = (gcnew System::Windows::Forms::TextBox());
			this->txtX3 = (gcnew System::Windows::Forms::TextBox());
			this->txtY1 = (gcnew System::Windows::Forms::TextBox());
			this->txtY2 = (gcnew System::Windows::Forms::TextBox());
			this->txtY3 = (gcnew System::Windows::Forms::TextBox());
			this->txtPttr = (gcnew System::Windows::Forms::TextBox());
			this->txtPltr = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cmdCalc
			// 
			this->cmdCalc->BackColor = System::Drawing::SystemColors::Info;
			this->cmdCalc->Location = System::Drawing::Point(936, 204);
			this->cmdCalc->Name = L"cmdCalc";
			this->cmdCalc->Size = System::Drawing::Size(160, 72);
			this->cmdCalc->TabIndex = 0;
			this->cmdCalc->Text = L"Вычислить";
			this->cmdCalc->UseVisualStyleBackColor = false;
			this->cmdCalc->Click += gcnew System::EventHandler(this, &MyForm::cmdCalc_Click);
			// 
			// cmdExit
			// 
			this->cmdExit->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->cmdExit->Location = System::Drawing::Point(936, 367);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(160, 72);
			this->cmdExit->TabIndex = 1;
			this->cmdExit->Text = L"Завершить";
			this->cmdExit->UseVisualStyleBackColor = false;
			this->cmdExit->Click += gcnew System::EventHandler(this, &MyForm::cmdExit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(262, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(647, 50);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Задание: Создать проект вычисляющий периметр и площадь\r\nтреугольника по заданным "
				L"координатам трёх точек";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkBlue;
			this->label2->Location = System::Drawing::Point(330, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(539, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите значения координат вершин треугольника";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(128, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"X1";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(479, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 27);
			this->label4->TabIndex = 5;
			this->label4->Text = L"X2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(759, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"X3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Maroon;
			this->label6->Location = System::Drawing::Point(128, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 30);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Y1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(480, 260);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 27);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Y2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(760, 260);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 25);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Y3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::BlueViolet;
			this->label9->Location = System::Drawing::Point(193, 395);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 25);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Периметр";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->ForeColor = System::Drawing::Color::Teal;
			this->label10->Location = System::Drawing::Point(643, 395);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(98, 25);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Площадь";
			// 
			// txtX1
			// 
			this->txtX1->Location = System::Drawing::Point(100, 171);
			this->txtX1->Multiline = true;
			this->txtX1->Name = L"txtX1";
			this->txtX1->Size = System::Drawing::Size(136, 40);
			this->txtX1->TabIndex = 12;
			this->txtX1->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX1_TextChanged);
			// 
			// txtX2
			// 
			this->txtX2->Location = System::Drawing::Point(440, 171);
			this->txtX2->Multiline = true;
			this->txtX2->Name = L"txtX2";
			this->txtX2->Size = System::Drawing::Size(140, 40);
			this->txtX2->TabIndex = 13;
			this->txtX2->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX2_TextChanged);
			// 
			// txtX3
			// 
			this->txtX3->Location = System::Drawing::Point(719, 171);
			this->txtX3->Multiline = true;
			this->txtX3->Name = L"txtX3";
			this->txtX3->Size = System::Drawing::Size(139, 40);
			this->txtX3->TabIndex = 14;
			// 
			// txtY1
			// 
			this->txtY1->Location = System::Drawing::Point(100, 308);
			this->txtY1->Multiline = true;
			this->txtY1->Name = L"txtY1";
			this->txtY1->Size = System::Drawing::Size(136, 46);
			this->txtY1->TabIndex = 15;
			this->txtY1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// txtY2
			// 
			this->txtY2->Location = System::Drawing::Point(440, 308);
			this->txtY2->Multiline = true;
			this->txtY2->Name = L"txtY2";
			this->txtY2->Size = System::Drawing::Size(140, 46);
			this->txtY2->TabIndex = 16;
			// 
			// txtY3
			// 
			this->txtY3->Location = System::Drawing::Point(718, 308);
			this->txtY3->Multiline = true;
			this->txtY3->Name = L"txtY3";
			this->txtY3->Size = System::Drawing::Size(140, 46);
			this->txtY3->TabIndex = 18;
			// 
			// txtPttr
			// 
			this->txtPttr->Enabled = false;
			this->txtPttr->Location = System::Drawing::Point(147, 428);
			this->txtPttr->Multiline = true;
			this->txtPttr->Name = L"txtPttr";
			this->txtPttr->Size = System::Drawing::Size(208, 46);
			this->txtPttr->TabIndex = 19;
			// 
			// txtPltr
			// 
			this->txtPltr->Enabled = false;
			this->txtPltr->Location = System::Drawing::Point(595, 428);
			this->txtPltr->Multiline = true;
			this->txtPltr->Name = L"txtPltr";
			this->txtPltr->Size = System::Drawing::Size(208, 46);
			this->txtPltr->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 541);
			this->Controls->Add(this->txtPltr);
			this->Controls->Add(this->txtPttr);
			this->Controls->Add(this->txtY3);
			this->Controls->Add(this->txtY2);
			this->Controls->Add(this->txtY1);
			this->Controls->Add(this->txtX3);
			this->Controls->Add(this->txtX2);
			this->Controls->Add(this->txtX1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->cmdCalc);
			this->Name = L"MyForm";
			this->Text = L"Вычисление периметра и площади треугольника (Васильев В. А. БЭИ2202) ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cmdExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void cmdCalc_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double x1 = Convert::ToDouble(txtX1->Text);
		double y1 = Convert::ToDouble(txtY1->Text);
		double x2 = Convert::ToDouble(txtX2->Text);
		double y2 = Convert::ToDouble(txtY2->Text);
		double x3 = Convert::ToDouble(txtX3->Text);
		double y3 = Convert::ToDouble(txtY3->Text);
		double s, p;
	// Расчет
		s = PS(x1, y1, x2, y2, x3, y3, p);
	// Вывод
		this->txtPttr->Text = p.ToString();
		this->txtPltr->Text = s.ToString();
	}
	private: System::Void txtX1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtX2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
