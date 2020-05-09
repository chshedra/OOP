//#include <windows.h>
#include "Lab3/Lab3Menu.h"





int main()
{
	// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleCP(1251);
	// установка кодовой страницы win-cp 1251 в поток вывода
	SetConsoleOutputCP(1251); 
	setlocale(LC_ALL, "ru_Ru.UTF-8");
	Lab3Menu();
	return 0;
}