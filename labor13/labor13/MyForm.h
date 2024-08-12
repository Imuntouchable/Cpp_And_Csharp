#pragma once
#include "Resh.h"
namespace labor13 {

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
	private: System::Windows::Forms::TextBox^ txtPutvhod;
	private: System::Windows::Forms::TextBox^ txtPutvihod;
	private: System::Windows::Forms::ListBox^ lstVhodnie;
	private: System::Windows::Forms::ListBox^ lstVihodnie;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ Otkritievihod;
	private: System::Windows::Forms::Button^ Obrabotka;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ Otkritievihodf;
	private: System::Windows::Forms::Button^ Exxit;


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
			this->txtPutvhod = (gcnew System::Windows::Forms::TextBox());
			this->txtPutvihod = (gcnew System::Windows::Forms::TextBox());
			this->lstVhodnie = (gcnew System::Windows::Forms::ListBox());
			this->lstVihodnie = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Otkritievihod = (gcnew System::Windows::Forms::Button());
			this->Obrabotka = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Otkritievihodf = (gcnew System::Windows::Forms::Button());
			this->Exxit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Путь к выходному файлу";
			// 
			// txtPutvhod
			// 
			this->txtPutvhod->Location = System::Drawing::Point(34, 33);
			this->txtPutvhod->Name = L"txtPutvhod";
			this->txtPutvhod->Size = System::Drawing::Size(490, 22);
			this->txtPutvhod->TabIndex = 2;
			// 
			// txtPutvihod
			// 
			this->txtPutvihod->Location = System::Drawing::Point(34, 90);
			this->txtPutvihod->Name = L"txtPutvihod";
			this->txtPutvihod->Size = System::Drawing::Size(490, 22);
			this->txtPutvihod->TabIndex = 3;
			// 
			// lstVhodnie
			// 
			this->lstVhodnie->FormattingEnabled = true;
			this->lstVhodnie->ItemHeight = 16;
			this->lstVhodnie->Location = System::Drawing::Point(34, 181);
			this->lstVhodnie->Name = L"lstVhodnie";
			this->lstVhodnie->Size = System::Drawing::Size(490, 116);
			this->lstVhodnie->TabIndex = 4;
			// 
			// lstVihodnie
			// 
			this->lstVihodnie->FormattingEnabled = true;
			this->lstVihodnie->ItemHeight = 16;
			this->lstVihodnie->Location = System::Drawing::Point(34, 346);
			this->lstVihodnie->Name = L"lstVihodnie";
			this->lstVihodnie->Size = System::Drawing::Size(490, 116);
			this->lstVihodnie->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Входной файл";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(109, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Выходной файл";
			// 
			// Otkritievihod
			// 
			this->Otkritievihod->Location = System::Drawing::Point(573, 90);
			this->Otkritievihod->Name = L"Otkritievihod";
			this->Otkritievihod->Size = System::Drawing::Size(209, 23);
			this->Otkritievihod->TabIndex = 9;
			this->Otkritievihod->Text = L"Открытие выходного файла";
			this->Otkritievihod->UseVisualStyleBackColor = true;
			this->Otkritievihod->Click += gcnew System::EventHandler(this, &MyForm::Otkritievihod_Click);
			// 
			// Obrabotka
			// 
			this->Obrabotka->Location = System::Drawing::Point(573, 143);
			this->Obrabotka->Name = L"Obrabotka";
			this->Obrabotka->Size = System::Drawing::Size(209, 23);
			this->Obrabotka->TabIndex = 10;
			this->Obrabotka->Text = L"Обработка файла";
			this->Obrabotka->UseVisualStyleBackColor = true;
			this->Obrabotka->Click += gcnew System::EventHandler(this, &MyForm::Obrabotka_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Путь к входному файлу";
			// 
			// Otkritievihodf
			// 
			this->Otkritievihodf->Location = System::Drawing::Point(573, 32);
			this->Otkritievihodf->Name = L"Otkritievihodf";
			this->Otkritievihodf->Size = System::Drawing::Size(209, 23);
			this->Otkritievihodf->TabIndex = 16;
			this->Otkritievihodf->Text = L"Открытие входного файла";
			this->Otkritievihodf->UseVisualStyleBackColor = true;
			this->Otkritievihodf->Click += gcnew System::EventHandler(this, &MyForm::Otkritievihodf_Click);
			// 
			// Exxit
			// 
			this->Exxit->Location = System::Drawing::Point(573, 439);
			this->Exxit->Name = L"Exxit";
			this->Exxit->Size = System::Drawing::Size(209, 23);
			this->Exxit->TabIndex = 17;
			this->Exxit->Text = L"Завершение работы";
			this->Exxit->UseVisualStyleBackColor = true;
			this->Exxit->Click += gcnew System::EventHandler(this, &MyForm::Exxit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 493);
			this->Controls->Add(this->Exxit);
			this->Controls->Add(this->Otkritievihodf);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Obrabotka);
			this->Controls->Add(this->Otkritievihod);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lstVihodnie);
			this->Controls->Add(this->lstVhodnie);
			this->Controls->Add(this->txtPutvihod);
			this->Controls->Add(this->txtPutvhod);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Exxit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Otkritievihodf_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->Title = "Открытие входного файла";
	openFileDialog->InitialDirectory = "d:\\";
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	openFileDialog->FilterIndex = 1;
	openFileDialog->ShowReadOnly = true;
	openFileDialog->ReadOnlyChecked = true;
	openFileDialog->RestoreDirectory = true;
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtPutvhod->Text = openFileDialog->FileName;
	else
		txtPutvhod->Text = "";
	Obrabotka->Enabled = txtPutvhod->Text->Length > 0 && txtPutvihod->Text->Length > 0;
}
private: System::Void Otkritievihod_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
	saveFileDialog->Title = "Открытие выходного файла";
	saveFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	saveFileDialog->FilterIndex = 1;
	saveFileDialog->OverwritePrompt = true;
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		txtPutvihod->Text = saveFileDialog->FileName;
	else
		txtPutvihod->Text = "";
	Obrabotka->Enabled = txtPutvhod->Text->Length > 0 && txtPutvihod->Text->Length > 0;
}
private: System::Void Obrabotka_Click(System::Object^ sender, System::EventArgs^ e) {
	lstVhodnie->Items->Clear();
	lstVihodnie->Items->Clear();
	String^ InFile = txtPutvhod->Text;
	String^ OutFile = txtPutvihod->Text;
	StreamReader^ sr = nullptr;
	StreamWriter^ sw = nullptr;
	try 
	{
		sr = gcnew StreamReader(InFile);
		sw = gcnew StreamWriter(OutFile, false);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (sr) sr->Close();
		if (sw) sw->Close();
		return;
	}
	FileProc(sr, sw, lstVhodnie, lstVihodnie);
	sr->Close();
	sw->Close();
}
};
}
