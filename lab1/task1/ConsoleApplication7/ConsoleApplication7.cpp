#include "pch.h"
#include "Windows.h"
using namespace System;
int main(array<System::String^>^ args)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Console::WriteLine(L"Введіть рядок: ");
	String^ a = Console::ReadLine();
	String^ b(L"begin " + a + L" end");
	Console::WriteLine(b);
	Console::WriteLine("Рядок містить {0} символів.", b->Length);
	return 0;
}

