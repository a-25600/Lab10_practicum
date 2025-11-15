#include "pch.h"
#include "Windows.h"
using namespace System;
int main(array<System::String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Console::WriteLine(L"Введіть рядок: ");
	String^ a = Console::ReadLine();
	String^ b(L"");
	for (int i = a->Length - 1; i >= 0; i--)
		b += a[i];
	Console::WriteLine(b);
	return 0;
}
