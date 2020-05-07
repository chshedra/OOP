#include <windows.h>
#include "Lab3/Lab3Menu.h"



int main()
{
	//TODO:  омменты над строкой
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	Lab3Menu();
	return 0;
}