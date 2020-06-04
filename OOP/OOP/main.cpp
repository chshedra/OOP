
#include "Lab5/Lab5Program.h"

int main()
{
	setlocale(LC_ALL, "ru_Ru.UTF-8");

	Lab5Program* lab5Menu = new Lab5Program();
	lab5Menu->Lab5Menu();

	return 0;
}