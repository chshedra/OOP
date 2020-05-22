
#include "Lab4/GeometricProgram.h"
#include "Lab3/Lab3Program.h"

int main()
{ 
	setlocale(LC_ALL, "ru_Ru.UTF-8");
	
	while (true)
	{
		cout << "1.Lab3" << endl
			<< "2.Lab4" << endl
			<< "3.Выход" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				Lab3Program* lab3Menu = new Lab3Program();
				lab3Menu->Lab3Menu();
				delete lab3Menu;
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