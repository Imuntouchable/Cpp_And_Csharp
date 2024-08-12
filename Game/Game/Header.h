#pragma once
#include "Gamedev.h"

namespace Header {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;
    // Класс Weather для управления условиями окружающей среды
    public ref class Weather {
    public:
        delegate void DayEventHandler();
        delegate void DayendEventHandler();
        delegate void NightEventHandler();
        delegate void WeatherChangedEventHandler(); // Новое событие для изменения погоды

        // Объявление событий
        event DayEventHandler^ OnDay;
        event DayendEventHandler^ OnDayend;
        event NightEventHandler^ OnNight;

        void triggerEvents(int counter) {
            if (counter == 15) {
                OnDay();
            }
            else if (counter == 5) {
                OnDayend();
            }
            else if (counter == 10) {
                OnNight();
            }
        }
    };


    // Класс Greenhouse с подпиской на события Weather
    public ref class Greenhouse {
    protected:
        double temperature;
        double humidity;
        int lightLevel;
        bool wateringState;
        Weather^ weather;

    public:
        Greenhouse(double temp, double hum, int light, bool water, Weather^ weather) {
            temperature = temp;
            humidity = hum;
            lightLevel = light;
            wateringState = water;
            this->weather = weather;

            this->weather->OnDay += gcnew Header::Weather::DayEventHandler(this, &Header::Greenhouse::adjustForDay);
            this->weather->OnDayend += gcnew Header::Weather::DayendEventHandler(this, &Header::Greenhouse::adjustForDayend);
            this->weather->OnNight += gcnew Header::Weather::NightEventHandler(this, &Header::Greenhouse::adjustForNight);
        }

        property double Temperature {
            double get() {
                return temperature;
            }
        }

        property double Humidity {
            double get() {
                return humidity;
            }
        }

        property int LightLevel {
            int get() {
                return lightLevel;
            }
        }

        property bool WateringState {
            bool get() {
                return wateringState;
            }
            void set(bool water) {
                wateringState = water;
            }
        }
        virtual void adjustForDay() {
            temperature = 21.0;
            humidity = 60.0;
            lightLevel = 0;
        }

        virtual void adjustForDayend() {
            temperature = 26.0;
            humidity = 65.0;
            lightLevel = 30;
        }

        virtual void adjustForNight() {
            temperature = 25.0;
            humidity = 70.0;
            lightLevel = 50;
        }
    };

    public ref class Greenhousew : public Greenhouse {
    public:
        Greenhousew(double temp, double hum, int light, bool water, Weather^ weather)
            : Greenhouse(temp, hum, light, water, weather) {
        }

        virtual void adjustForDay() override {
            temperature = 25.0; // Более продвинутая настройка для дня
            humidity = 64.0;
            lightLevel = 0;
            WateringState = true;
        }
    };
    public ref class Sun
    {
    public:
        PictureBox^ Picture;
        int Speed;
        cli::array<Point>^ Route;
        int CurrentPointIndex;
        PointF CurrentPosition;
        PointF Direction;

        Sun(PictureBox^ picture, int speed, cli::array<Point>^ route)
        {
            Picture = picture;
            Speed = speed;
            Route = route;
            CurrentPointIndex = 0;
            CurrentPosition = PointF(Route[0].X, Route[0].Y);
            UpdateDirection();
        }

        void UpdateDirection()
        {
            if (CurrentPointIndex < Route->Length - 1)
            {
                PointF nextPoint = PointF(Route[CurrentPointIndex + 1].X, Route[CurrentPointIndex + 1].Y);
                Direction = PointF(nextPoint.X - CurrentPosition.X, nextPoint.Y - CurrentPosition.Y);
                float length = Math::Sqrt(Direction.X * Direction.X + Direction.Y * Direction.Y);
                Direction.X /= length;
                Direction.Y /= length;
            }
        }

        virtual void Move()
        {
            CurrentPosition.X += Speed * Direction.X;
            CurrentPosition.Y += Speed * Direction.Y;
            Picture->Location = Point((int)CurrentPosition.X, (int)CurrentPosition.Y);

            if (CurrentPointIndex < Route->Length - 1 && Math::Abs(CurrentPosition.X - Route[CurrentPointIndex + 1].X) < Speed && Math::Abs(CurrentPosition.Y - Route[CurrentPointIndex + 1].Y) < Speed)
            {
                CurrentPosition = PointF(Route[CurrentPointIndex + 1].X, Route[CurrentPointIndex + 1].Y);
                CurrentPointIndex = (CurrentPointIndex + 1) % Route->Length; // Используем оператор модуля для зацикливания маршрута
                UpdateDirection();
            }
            else if (CurrentPointIndex == Route->Length - 1)
            {
                CurrentPointIndex = 0;
                UpdateDirection();
            }
        }

        virtual bool IsAtPoint(Point point)
        {
            int delta = Speed;
            return (Math::Abs(this->Picture->Location.X - point.X) <= delta) && (Math::Abs(this->Picture->Location.Y - point.Y) <= delta);
        }
    };

    public ref class Moon : public Sun
    {
    public:
        Control^ ParentControl; // Родительский контрол
        Sun^ CurrentSun;

        Moon(PictureBox^ picture, int speed, cli::array<Point>^ route, Control^ parentControl, Sun^ currentSun) : Sun(picture, speed, route)
        {
            this->ParentControl = parentControl;
            this->CurrentSun = currentSun;
        }

        virtual void Move() override
        {
            CurrentPosition.X += Speed * Direction.X;
            CurrentPosition.Y += Speed * Direction.Y;
            Picture->Location = Point((int)CurrentPosition.X, (int)CurrentPosition.Y);

            if (CurrentPointIndex < Route->Length - 1 && Math::Abs(CurrentPosition.X - Route[CurrentPointIndex + 1].X) < Speed && Math::Abs(CurrentPosition.Y - Route[CurrentPointIndex + 1].Y) < Speed)
            {
                CurrentPosition = PointF(Route[CurrentPointIndex + 1].X, Route[CurrentPointIndex + 1].Y);
                CurrentPointIndex = (CurrentPointIndex + 1) % Route->Length; // Используем оператор модуля для зацикливания маршрута
                UpdateDirection();
            }
            else if (CurrentPointIndex == Route->Length - 1)
            {
                CurrentPointIndex = 0;
                UpdateDirection();
            }
        }
    };
    public ref class People : public Sun {
    private:
        Weather^ weather;
        double temperature; // Поле для хранения текущей температуры
        double humidity;    // Поле для хранения текущей влажности
        int lightLevel;
        bool wateringState;

        double targetTemperature; // Целевые значения для параметров
        double targetHumidity;
        int targetLightLevel;

        const double temperatureStep = 0.1; // Шаг изменения температуры
        const double humidityStep = 0.1;    // Шаг изменения влажности
        const int lightLevelStep = 1;       // Шаг изменения уровня освещения

    public:
        Control^ ParentControl;
        Sun^ CurrentSun;

        People(PictureBox^ picture, int speed, cli::array<Point>^ route, Control^ parentControl, Sun^ currentSun, Weather^ weather)
            : Sun(picture, speed, route), weather(weather), temperature(21.0), humidity(19.0), lightLevel(23) {
            this->ParentControl = parentControl;
            this->CurrentSun = currentSun;

            // Подписка на события Weather
            this->weather->OnDay += gcnew Header::Weather::DayEventHandler(this, &Header::People::DayHandler);
            this->weather->OnDayend += gcnew Header::Weather::DayendEventHandler(this, &Header::People::DayendHandler);
            this->weather->OnNight += gcnew Header::Weather::NightEventHandler(this, &Header::People::NightHandler);

            // Инициализация начальных значений параметров
            targetTemperature = temperature;
            targetHumidity = humidity;
            targetLightLevel = lightLevel;
        }

        property double Temperature {
            double get() {
                return temperature;
            }
        }

        property double Humidity {
            double get() {
                return humidity;
            }
        }

        property int LightLevel {
            int get() {
                return lightLevel;
            }
        }

        property bool WateringState {
            bool get() {
                return wateringState;
            }
            void set(bool water) {
                wateringState = water;
            }
        }

        virtual void settingsForDay() {
            targetTemperature = 23.0;
            targetHumidity = 60.0;
            targetLightLevel = 0;
        }

        virtual void settingsForDayend() {
            targetTemperature = 21.0;
            targetHumidity = 65.0;
            targetLightLevel = 30;
        }

        virtual void settingsForNight() {
            targetTemperature = 20.0;
            targetHumidity = 59.0;
            targetLightLevel = 50;
        }

        virtual void Move() override {
            CurrentPosition.X += Speed * Direction.X;
            CurrentPosition.Y += Speed * Direction.Y;
            Picture->Location = Point((int)CurrentPosition.X, (int)CurrentPosition.Y);

            if (CurrentPointIndex < Route->Length - 1 && Math::Abs(CurrentPosition.X - Route[CurrentPointIndex + 1].X) < Speed && Math::Abs(CurrentPosition.Y - Route[CurrentPointIndex + 1].Y) < Speed) {
                CurrentPosition = PointF(Route[CurrentPointIndex + 1].X, Route[CurrentPointIndex + 1].Y);
                CurrentPointIndex = (CurrentPointIndex + 1) % Route->Length;
                UpdateDirection();
            }
            else if (CurrentPointIndex == Route->Length - 1) {
                CurrentPointIndex = 0;
                UpdateDirection();
            }

            UpdateParameters(); // Обновляем параметры в каждом кадре
        }

        void UpdateParameters() {
            if (temperature < targetTemperature) {
                temperature = Math::Min(temperature + temperatureStep, targetTemperature);
            }
            else if (temperature > targetTemperature) {
                temperature = Math::Max(temperature - temperatureStep, targetTemperature);
            }

            if (humidity < targetHumidity) {
                humidity = Math::Min(humidity + humidityStep, targetHumidity);
            }
            else if (humidity > targetHumidity) {
                humidity = Math::Max(humidity - humidityStep, targetHumidity);
            }
            // Округление влажности до одного знака после запятой
            humidity = Math::Round(humidity, 1);

            if (lightLevel < targetLightLevel) {
                lightLevel = Math::Min(lightLevel + lightLevelStep, targetLightLevel);
            }
            else if (lightLevel > targetLightLevel) {
                lightLevel = Math::Max(lightLevel - lightLevelStep, targetLightLevel);
            }
        }


        void DayHandler() {
            settingsForDay();
        }

        void DayendHandler() {
            settingsForDayend();
        }

        void NightHandler() {
            settingsForNight();
        }
    };
}