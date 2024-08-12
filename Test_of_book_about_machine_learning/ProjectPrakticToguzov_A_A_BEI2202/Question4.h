#pragma once
#include "Question5.h"
namespace ProjectPrakticToguzovAABEI2202 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectPrakticDllToguzovAABEI2202;

	/// <summary>
	/// Сводка для Question4
	/// </summary>
	public ref class Question4 : public System::Windows::Forms::Form
	{
	public:
		Question4(void)
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
		~Question4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;










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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(393, 511);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 56);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ответить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(260, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(429, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Сопопставьте системы с классификациями";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 26;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Среды разработки интеллектуальных систем", L"Системы поддержки принятия решения",
					L"Системы генерации (текст, музыка и т.д.)"
			});
			this->listBox1->Location = System::Drawing::Point(60, 79);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(792, 82);
			this->listBox1->TabIndex = 16;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 26;
			this->listBox2->Location = System::Drawing::Point(60, 242);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(520, 30);
			this->listBox2->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(595, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 30);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Перенести ответ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Question4::button2_Click);
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 26;
			this->listBox3->Location = System::Drawing::Point(60, 315);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(520, 30);
			this->listBox3->TabIndex = 19;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 26;
			this->listBox4->Location = System::Drawing::Point(60, 388);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(520, 30);
			this->listBox4->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(55, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(377, 26);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Разработка интеллектуальных систем";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(55, 288);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(353, 26);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Управление и справочные системы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(55, 360);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 26);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Игры и творчество";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(595, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 30);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Перенести ответ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Question4::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(595, 388);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 30);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Перенести ответ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Question4::button4_Click);
			// 
			// Question4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 579);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Question4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Question4";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Class1::Question4(listBox1, listBox2, listBox3, listBox4)) {
			Question5^ f = gcnew Question5();
			f->Owner = this;
			f->Show();
			this->Hide();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::rezult(listBox1, listBox2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::rezult(listBox1, listBox3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Class1::rezult(listBox1, listBox4);
	}
};
}
