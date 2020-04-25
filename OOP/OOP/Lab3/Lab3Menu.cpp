#include "Lab3Menu.h"

void Lab3Menu()
{
	setlocale(LC_ALL, "rus");
	while (true)
	{
		cout << "1.DemoBook" << endl
			<< "2.DemoRoute" << endl
			<< "3.DemoRectangleWithPoint" << endl
			<< "4.DemoFlightWithTime" << endl
			<< "5.DemoBand" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				DemoBook();
				break;
			}
			case 2:
			{
				DemoRoute();
				break;
			}
			case 3:
			{
				DemoRectangleWithPoint();
				break;
			}
			case 4:
			{
				DemoFlightWithTime();
				break;
			}
			case 5:
			{
				DemoBand();
				break;
			}
			default:
			{
				cout << "Выберите правильный пункт меню!" << endl;
			}
		}
			
			
				
	}
}