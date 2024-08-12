#pragma once
#include "Lab1.h"
#include "Lab2.h"
#include "massives2d.h"
#include "Condition_lab1.h"
#include "Condition_lab2.h"
#include "Condition_lab3.h"
#include "Condition_lab4.h"
#include "Condition_lab5.h"
#include "Condition_lab6.h"
#include "Condition_lab7.h"
#include "Exchange.h"
namespace Labs{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label12;
	protected:
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button8;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(251, 54);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(498, 19);
			this->label12->TabIndex = 35;
			this->label12->Text = L"бюджетное образовательное учреждение высшего образования";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(249, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(503, 19);
			this->label11->TabIndex = 34;
			this->label11->Text = L"«Московский технический университет связи и информатики»";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(232, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(536, 19);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Ордена Трудового Красного Знамени федеральное государственное ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(955, 19);
			this->label1->TabIndex = 32;
			this->label1->Text = L"МИНИСТЕРСТВО ЦИФРОВОГО РАЗВИТИЯ, СВЯЗИ И МАССОВЫХ КОММУНИКАЦИЙ РОССИЙСКОЙ ФЕДЕРАЦ"
				L"ИИ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(795, 494);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(213, 19);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Проверил: доц. Гуриков С. Р.";
			this->label6->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(795, 466);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 19);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Вариант 24";
			this->label5->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(795, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 19);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Тогузов А. А.";
			this->label4->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(795, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 19);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Выполнил: студент гр. БЭИ2202 ";
			this->label3->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(375, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 25);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Лабораторные работы";
			this->label2->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 35);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Лаб1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(799, 547);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Выйти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(197, 407);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 35);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Лаб2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(315, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(370, 25);
			this->label7->TabIndex = 39;
			this->label7->Text = L"\"Технологии программирования\"";
			this->label7->UseWaitCursor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(410, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(181, 25);
			this->label8->TabIndex = 40;
			this->label8->Text = L"По дисциплине:";
			this->label8->UseWaitCursor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(337, 407);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 35);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Лаб3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(337, 459);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 35);
			this->button5->TabIndex = 44;
			this->button5->Text = L"Лаб6";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(197, 459);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(106, 35);
			this->button6->TabIndex = 43;
			this->button6->Text = L"Лаб5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Main::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(56, 459);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 35);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Лаб4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Main::button7_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(56, 511);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(106, 35);
			this->button10->TabIndex = 45;
			this->button10->Text = L"Лаб7";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Main::button10_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(197, 511);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(153, 46);
			this->button8->TabIndex = 46;
			this->button8->Text = L"Обмен библеотекой";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Main::button8_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 582);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Титульный лист";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Condition_lab1^ f = gcnew Condition_lab1();
		f->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Condition_lab2^ f = gcnew Condition_lab2();
		f->ShowDialog();
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Condition_lab3^ f = gcnew Condition_lab3();
		f->ShowDialog();
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Condition_lab4^ f = gcnew Condition_lab4();
	f->ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Condition_lab5^ f = gcnew Condition_lab5();
	f->ShowDialog();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Condition_lab6^ f = gcnew Condition_lab6();
	f->ShowDialog();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Condition_lab7^ f = gcnew Condition_lab7();
	f->ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Exchange^ f = gcnew Exchange();
	f->ShowDialog();
}
};
}
