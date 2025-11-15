#include "pch.h"
#include "Windows.h"
using namespace System;
int main(array<System::String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Console::WriteLine(L"Введіть перший рядок: ");
	String^ a = Console::ReadLine();
	Console::WriteLine(L"Введіть другий рядок: ");
	String^ b = Console::ReadLine();
	String^ c(a + b);
	Console::WriteLine(c);
	return 0;
}