#include "pch.h"
#include "Windows.h"

using namespace System;
int main(array<System::String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N, min, max, i, j, M, P;
	Console::WriteLine(L"Введіть кількість рядків і стовпців матриці: ");
	N = Int32::Parse(Console::ReadLine());
	array<int, 2>^ A = gcnew array<int, 2>(N, N);
	max = 9; min = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) A[i, j] = rand() % (max - min + 1) + min;
	}
	Console::WriteLine(L"Матриця:");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			Console::Write(L"{0,4} ", A[i, j]);
		}
		Console::WriteLine();
	}
	M = N - 1;
	i = 0;
	for (j = 0; j < N; j++) {
		P = A[i, M];
		A[i, M] = A[i, j];
		A[i, j] = P;
		M--;
		i++;
	}
	Console::WriteLine(L"Нова матриця:");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			Console::Write(L"{0,4} ", A[i, j]);
		}
		Console::WriteLine();
	}
	return 0;
}