#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace LabsDll {
	public ref class Class1
	{
		// TODO: Добавьте сюда свои методы для этого класса.
	public:
		//Лабораторная 1
		static double VichisABC(double a, double b, double c);
		static void Vichis(double& alpha, double& beta, double& gamma, double a, double b, double c);
		static double Input(TextBox^ t);
		static void Output(double alpha, double beta, double gamma, TextBox^ t1, TextBox^ t2, TextBox^ t3);

		//Лабораторная 2
		static void input(int* mas, int num);
		static void output(int* mas, int len, DataGridView^ grid);
		static double summa(int* mas, int num);
		static void newmas(int* mas, int* answermas, int num, double sumsqrt, int& j);

		//Лабраторная 3
		static void add();
		static void add_struct();
		static void add_zap(int* mas, int* answermas, int num, int j);

		//Лабораторная 4
		static void zapisword(int* mas, int* answermas, int num, int j);

		//Лабораторная 5
		static void mon(int* mas, int num, bool monotony);
		static void pos(int* mas, int num, int positive);

		//Лабораторная 6
		static void zapisexcel(int* mas, int* answermas, int num, int j);

		//Лабораторная 7
		static void Class1::cleaner(int** mas, int n);
		static void Class1::FillMatrix(int** matrix, int rows, int cols);
		static void Class1::output_matr(int** matr, int n, int m, DataGridView^ grid);
		static int Class1::CompareFunction(int** source_matrix, int rows, int cols, int choice_col);
		static int** Class1::CreateMatrix(int rows, int cols);
		static int* Class1::CreateNewArray(int** source_matrix, int rows, int cols, int choice_col, int& new_size);
	};
}
