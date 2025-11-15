#include "pch.h"
#include "Windows.h"
using namespace System;
int main(array<System::String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double A, B;
	int N, min, max;
	Console::WriteLine(L"Введіть координату A школи: ");
	A = Double::Parse(Console::ReadLine());
	Console::WriteLine(L"Введіть координату B школи: ");
	B = Double::Parse(Console::ReadLine());
	Console::WriteLine(L"Введіть кількість будинків: ");
	N = Int32::Parse(Console::ReadLine());
	array<double>^ X = gcnew array<double>(N);
	array<double>^ Y = gcnew array<double>(N);
	max = 5; min = -5;
	for (int i = 0; i < N; i++) {
		X[i] = rand() % (max - min + 1) + min;
		Y[i] = rand() % (max - min + 1) + min;
		Console::WriteLine(L"Координати будинку {0}: {1}, {2}", i + 1, X[i], Y[i]);
	}
	for (int i = 0; i < N; i++) {
		double L = Math::Sqrt((A - X[i]) * (A - X[i]) + (B - Y[i]) * (B - Y[i]));
		Console::WriteLine(L"Відстань {0}: {1}", i + 1, L);
	}
	return 0;
}