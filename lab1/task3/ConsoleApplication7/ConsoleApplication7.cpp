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
	int result(String::Compare(a, b));
	if (result < 0)
		Console::WriteLine(L"{0} менше, ніж {1}.", a, b);
	else if (result > 0)
		Console::WriteLine(L"{0} більше, ніж {1}.", a, b);
	else
		Console::WriteLine(L"{0} еквівалентно {1}.", a, b);
	return 0;
}
