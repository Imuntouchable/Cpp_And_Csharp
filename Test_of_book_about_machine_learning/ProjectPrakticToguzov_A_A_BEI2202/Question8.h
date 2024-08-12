#pragma once
#include "Question9.h"

namespace ProjectPrakticToguzovAABEI2202 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectPrakticDllToguzovAABEI2202;

	/// <summary>
	/// Сводка для Question8
	/// </summary>
	public ref class Question8 : public System::Windows::Forms::Form
	{
	public:
		Question8(void)
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
		~Question8()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;


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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(476, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 56);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ответить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Question8::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(257, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(629, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"В каком году годы был сформирован термин \"нейронные сети\"";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(264, 273);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(563, 56);
			this->trackBar1->TabIndex = 11;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Question8::trackBar1_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(512, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 26);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			// 
			// Question8
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1030, 583);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Question8";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Question8";
			this->Load += gcnew System::EventHandler(this, &Question8::Question8_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Class1::Question8(trackBar1, label2)) {
			Question9^ f = gcnew Question9();
			f->Owner = this;
			f->Show();
			this->Hide();
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		label2->Text = ("Ответ: " + Convert::ToString(trackBar1->Value));
	}
	private: System::Void Question8_Load(System::Object^ sender, System::EventArgs^ e) {
		trackBar1->Minimum = 1910;
		trackBar1->Maximum = 1990;
		trackBar1->LargeChange = 10;
		trackBar1->Value = 1910;
	}
};
}
