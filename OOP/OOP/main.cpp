
#include "Lab4/GeometricProgram.h"
#include "Lab5/Lab5Program.h"

int main()
{
	setlocale(LC_ALL, "ru_Ru.UTF-8");
	setlocale(LC_ALL, "rus");

	while (true)
	{
		cout << "1.Lab5" << endl
			<< "2.Lab4" << endl
			<< "3.Выход" << endl;
		int choice = InputValidation();
		switch (choice)
		{
		case 1:
		{
			Lab5Program* lab5Menu = new Lab5Program();
			lab5Menu->Lab5Menu();
			delete lab5Menu;
			break;
		}
		case 2:
		{
			GeometricProgram* lab4Menu = new GeometricProgram();
			lab4Menu->GeometricProgramMenu();
			delete lab4Menu;
			break;
		}
		case 3:
		{
			exit(0);
		}
		default:
		{
			cout << "Выберите правильный пункт меню!" << endl;
		}
		}
	}
	return 0;
}