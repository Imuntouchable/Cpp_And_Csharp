#pragma once
#include "Header.h"
namespace Game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Header;

	/// <summary>
	/// Сводка для Gamedev
	/// </summary>
	public ref class Gamedev : public System::Windows::Forms::Form
	{
	private:
		int counter; // Объявляем переменную counter как член класса
		int counter2;
		int now;
		Sun^ sun;
		Moon^ moon;
		People^ people;
		System::Windows::Forms::Timer^ sunTimer;
		System::Windows::Forms::Timer^ moonTimer;
		System::Windows::Forms::Timer^ peopleTimer;
		System::Windows::Forms::Timer^ timer1;
		int currentPointIndex = 0;
		int currentPointIndex2 = 0;
		cli::array<Point>^ route;
		cli::array<Point>^ moonRoute;
		cli::array<Point>^ peopleRoute;
		Greenhouse^ greenhouse;
		Greenhousew^ greenhousew;
		Weather^ weather;

	protected:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
	protected:
	protected: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TrackBar^ trackBar1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected: System::Windows::Forms::Label^ label9;
	private:


	protected: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	protected:
	protected:
	private:
	protected:
	private:
		System::Windows::Forms::Label^ label6;

	public:
		Gamedev(void)
		{
			InitializeComponent();
			weather = gcnew Weather();
			greenhouse = gcnew Greenhouse(25.0, 60.0, 0, false, weather);
			greenhousew = gcnew Greenhousew(25.0, 64.0, 0, false, weather);
			Bitmap^ sunImage = gcnew Bitmap("Image/sun.png");
			Bitmap^ moonImage = gcnew Bitmap("Image/moon.png");
			Bitmap^ peopleImage = gcnew Bitmap("Image/people.png");

			float scalepeople = 0.07f;
			float scale = 0.9f;
			System::Drawing::Size newSize = System::Drawing::Size((int)(sunImage->Width * scale), (int)(sunImage->Height * scale));
			Bitmap^ newSunImage = gcnew Bitmap(sunImage, newSize);
			newSize = System::Drawing::Size((int)(moonImage->Width * scale), (int)(moonImage->Height * scale));
			Bitmap^ newMoonImage = gcnew Bitmap(moonImage, newSize);
			newSize = System::Drawing::Size((int)(peopleImage->Width * scalepeople), (int)(peopleImage->Height * scalepeople));
			Bitmap^ newpeopleImage = gcnew Bitmap(peopleImage, newSize);

			PictureBox^ sunPicture = gcnew PictureBox();
			sunPicture->Image = newSunImage;
			sunPicture->SizeMode = PictureBoxSizeMode::AutoSize;
			PictureBox^ moonPicture = gcnew PictureBox();
			moonPicture->Image = newMoonImage;
			moonPicture->SizeMode = PictureBoxSizeMode::AutoSize;
			PictureBox^ peoplePicture = gcnew PictureBox();
			peoplePicture->Image = newpeopleImage;
			peoplePicture->SizeMode = PictureBoxSizeMode::AutoSize;

			route = gcnew cli::array<Point>(6);
			route[0] = Point(-200, 150);
			route[1] = Point(600, 100);
			route[2] = Point(1600, 150);
			route[3] = Point(1600, -700);
			route[4] = Point(-200, -700);
			route[5] = Point(-200, 150);

			moonRoute = gcnew cli::array<Point>(6);
			moonRoute[0] = Point(1600, 150);
			moonRoute[1] = Point(1600, -700);
			moonRoute[2] = Point(-200, -700);
			moonRoute[3] = Point(-200, 150);
			moonRoute[4] = Point(600, 100);
			moonRoute[5] = Point(1600, 150);

			peopleRoute = gcnew cli::array<Point>(8);
			peopleRoute[0] = Point(-200, 650);
			peopleRoute[1] = Point(340, 650);
			peopleRoute[2] = Point(340, 560);
			peopleRoute[3] = Point(200, 560);
			peopleRoute[4] = Point(450, 560);
			peopleRoute[5] = Point(340, 560);
			peopleRoute[6] = Point(340, 650);
			peopleRoute[7] = Point(-200, 650);

			sun = gcnew Sun(sunPicture, 25, route);
			moon = gcnew Moon(moonPicture, 25, moonRoute, this, sun);
			people = gcnew People(peoplePicture, 10, peopleRoute, this, sun, weather);

			this->Controls->Add(sun->Picture);
			sun->Picture->BringToFront();
			this->Controls->Add(moon->Picture);
			moon->Picture->BringToFront();
			this->Controls->Add(people->Picture);
			people->Picture->BringToFront();
			timer1 = gcnew System::Windows::Forms::Timer();
			timer1->Tick += gcnew System::EventHandler(this, &Gamedev::timer1_Tick);
			timer1->Interval = 1550; // Интервал в миллисекундах
			timer1->Start();
			sunTimer = gcnew System::Windows::Forms::Timer();
			sunTimer->Interval = 100; // Интервал в миллисекундах
			moonTimer = gcnew System::Windows::Forms::Timer();
			moonTimer->Interval = 100; // Интервал в миллисекундах
			peopleTimer = gcnew System::Windows::Forms::Timer();
			peopleTimer->Interval = 100; // Интервал в миллисекундах

			sunTimer->Tick += gcnew System::EventHandler(this, &Gamedev::Timer_Tick2);
			moonTimer->Tick += gcnew System::EventHandler(this, &Gamedev::Timer_Tick3);
			peopleTimer->Tick += gcnew System::EventHandler(this, &Gamedev::Timer_Tick4);

			sunTimer->Start();
			moonTimer->Start();
			peopleTimer->Start();
		}

	private: void UpdateUI() {
		this->temperatureLabel->Text = "Температура: 20 °C";
		this->label8->Text = "Влажность: 60 %";
		this->lightLevelLabel->Text = "Уровень освещения: " + greenhouse->LightLevel.ToString();
		this->label3->Text = "Полив работает";
		this->label13->Text = "Температура: " + greenhouse->Temperature.ToString() + " °C";
		this->label12->Text = "Влажность: " + greenhouse->Humidity.ToString() + " %";
	}
	private: void UpdatePeopleUI() {
		this->label6->Text = "Температура: " + people->Temperature.ToString() + " °C";
		this->label5->Text = "Влажность: " + people->Humidity.ToString() + "  %";
		this->label4->Text = "Уровень освещения: " + people->LightLevel.ToString();
		this->wateringStateLabel->Text = "Полив отсутствует";
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		counter++;
		if (counter == 4) {
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/dayw.png");
			weather->triggerEvents(counter);

		}
		else if (counter == 5) {
			weather->triggerEvents(counter);
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/dayend.png");
		}
		else if (counter == 9) {
			weather->triggerEvents(counter);
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/dayendw.png");
		}
		else if (counter == 10) {
			weather->triggerEvents(counter);
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/hight.png");
		}
		else if (counter == 14) {
			weather->triggerEvents(counter);
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/hightw.png");
		}
		else if (counter == 15) {
			weather->triggerEvents(counter);
			this->pictureBox1->Image = Image::FromFile("C://Users/Александр/OneDrive/Desktop/вуз/Тех_программирорвания/Game/Game/Image/day.png");
			counter = 0;
		}
		UpdateUI();
	}

	private: System::Void Timer_Tick2(System::Object^ sender, System::EventArgs^ e) {
		sun->Move();
	}

	private: System::Void Timer_Tick3(System::Object^ sender, System::EventArgs^ e) {
		moon->Move();
	}
	private: System::Void Timer_Tick4(System::Object^ sender, System::EventArgs^ e) {
		people->Move();
		if (people->CurrentPosition.X == peopleRoute[1].X)
		{
			// Если человек достиг определенной точки, скрываем его картинку
			people->Picture->Visible = false;
		}
		else if (people->CurrentPosition.Y == peopleRoute[2].Y)
		{
			Image^ sunImage = Image::FromFile("Image/people_in.png");
			int newWidth = (int)(sunImage->Width * 0.07f);
			int newHeight = (int)(sunImage->Height * 0.07f);
			Image^ resizedSunImage = sunImage->GetThumbnailImage(newWidth, newHeight, nullptr, IntPtr::Zero);
			people->Picture->Image = resizedSunImage;
			people->Picture->Visible = true;
			UpdatePeopleUI();
		}
		else {
			Image^ sunImage = Image::FromFile("Image/people.png");
			int newWidth = (int)(sunImage->Width * 0.07f);
			int newHeight = (int)(sunImage->Height * 0.07f);
			Image^ resizedSunImage = sunImage->GetThumbnailImage(newWidth, newHeight, nullptr, IntPtr::Zero);
			people->Picture->Image = resizedSunImage;
			people->Picture->Visible = true;
		}
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Gamedev()
		{
			if (components)
			{
				delete components;
			}
		}


		System::Windows::Forms::Label^ temperatureLabel;
		System::Windows::Forms::Label^ lightLevelLabel;
		System::Windows::Forms::Label^ wateringStateLabel;

	protected:
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gamedev::typeid));
			this->temperatureLabel = (gcnew System::Windows::Forms::Label());
			this->lightLevelLabel = (gcnew System::Windows::Forms::Label());
			this->wateringStateLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// temperatureLabel
			// 
			this->temperatureLabel->AutoSize = true;
			this->temperatureLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->temperatureLabel->Location = System::Drawing::Point(187, 867);
			this->temperatureLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->temperatureLabel->Name = L"temperatureLabel";
			this->temperatureLabel->Size = System::Drawing::Size(124, 22);
			this->temperatureLabel->TabIndex = 2;
			this->temperatureLabel->Text = L"Температура:";
			// 
			// lightLevelLabel
			// 
			this->lightLevelLabel->AutoSize = true;
			this->lightLevelLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lightLevelLabel->Location = System::Drawing::Point(187, 906);
			this->lightLevelLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lightLevelLabel->Name = L"lightLevelLabel";
			this->lightLevelLabel->Size = System::Drawing::Size(182, 22);
			this->lightLevelLabel->TabIndex = 4;
			this->lightLevelLabel->Text = L"Уровень освещения:";
			// 
			// wateringStateLabel
			// 
			this->wateringStateLabel->AutoSize = true;
			this->wateringStateLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wateringStateLabel->Location = System::Drawing::Point(187, 927);
			this->wateringStateLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->wateringStateLabel->Name = L"wateringStateLabel";
			this->wateringStateLabel->Size = System::Drawing::Size(70, 22);
			this->wateringStateLabel->TabIndex = 5;
			this->wateringStateLabel->Text = L"Полив:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-4, 867);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Первая теплица";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(447, 870);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 26);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Вторая теплица";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(656, 929);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 22);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Полив:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(656, 906);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Уровень освещения:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(656, 887);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Влажность:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(656, 867);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Температура:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1485, 873);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Увеличить скорость";
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(1363, 906);
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(381, 56);
			this->trackBar1->TabIndex = 15;
			this->trackBar1->Value = 1;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Gamedev::trackBar1_Scroll);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1768, 898);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 41);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Выйти";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gamedev::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(187, 887);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(110, 22);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Влажность:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2280, 866);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::SizeNESW;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(895, 870);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 26);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Внешние данные";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1099, 893);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 22);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Влажность:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1099, 871);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(124, 22);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Температура:";
			// 
			// Gamedev
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->wateringStateLabel);
			this->Controls->Add(this->lightLevelLabel);
			this->Controls->Add(this->temperatureLabel);
			this->Location = System::Drawing::Point(1, 0);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Gamedev";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gamedev";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		int speedFactor = trackBar1->Value;
		timer1->Interval = 1550 / speedFactor;
		sunTimer->Interval = 100 / speedFactor;
		moonTimer->Interval = 100 / speedFactor;
		peopleTimer->Interval = 100 / speedFactor;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}
