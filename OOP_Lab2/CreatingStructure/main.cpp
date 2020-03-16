#include <iostream>
#include "Flight.h"
#include "Movie.h"
#include "Color.h"
#include "Rectangle.h"
#include "Time.h"
#include "Common.h"

using namespace std;

void AutoStructuresMenu();
void ManuallyStructuresMenu();
void FunctionsMenu();
void DynamicStructuresMenu();
void FunctionsConstructorsMenu();
void EnumsMenu();

int main()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.Get structures manually" << endl
			<< "2.Get structures auto" << endl
			<< "3.Functions" << endl
			<< "4.Dynamic structures" << endl
			<< "5.Functions-constructors" << endl
			<< "6.Enums" << endl;
		int choice = InputValidation();
		switch (choice)
		{
			case 1:
			{
				AutoStructuresMenu();
				break;
			}
			case 2:
			{
				ManuallyStructuresMenu();
				break;
			}
			case 3:
			{
				FunctionsMenu();
				break;
			}
			case 4:
			{
				DynamicStructuresMenu();
				break;
			}
			case 5:
			{
				FunctionsConstructorsMenu();
				break;
			}
			case 6:
			{
				EnumsMenu();
				break;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}


void AutoStructuresMenu()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.Rectangle" << endl
			<< "2.Film" << endl
			<< "3.Flight" << endl
			<< "4.Time" << endl
			<< "5.Back to the main menu" << endl;
		int choiceManually = InputValidation();
		switch (choiceManually)
		{
			case 1:
			{
				DemoRectangle();
				break;
			}
			case 2:
			{
				DemoMovie();
				break;
			}
			case 3:
			{
				DemoFlight();
				break;
			}
			case 4:
			{
				DemoTime();
				break;
			}
			case 5:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}

void ManuallyStructuresMenu()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.Rectangle" << endl
			<< "2.Film" << endl
			<< "3.Flight" << endl
			<< "4.Time" << endl
			<< "5.Back to the main menu" << endl;
		int choiceManually = InputValidation();
		switch (choiceManually)
		{
			case 1:
			{
				AutoRectangle();
				break;
			}
			case 2:
			{
				AutoMovie();
				break;
			}
			case 3:
			{
				AutoFlight();
				break;
			}
			case 4:
			{
				AutoTime();
				break;
			}
			case 5:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}

void FunctionsMenu()
{
	Rectangle rectangle;
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.Read rectangle" << endl
			<< "2.Write rectangle" << endl
			<< "3.Read and write rectangle" << endl
			<< "4.Time" << endl
			<< "5.Back to the main menu" << endl;
		int choiceFunction = InputValidation();
		switch (choiceFunction)
		{
			case 1:
			{
				ReadRectangle(rectangle);
				cout << endl;
				break;
			}
			case 2:
			{
				WriteRectangle(rectangle);
				cout << endl;
				break;
			}
			case 3:
			{
				DemoWriteAndReadRectangle(rectangle);
				break;
			}
			case 4:
			{
				AutoTime();
				break;
			}
			case 5:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}

void DynamicStructuresMenu()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.DemoDynamicFlight" << endl
			<< "2.DemoDynamicFlights" << endl
			<< "3.Back to the main menu" << endl;
		int choiceFunction = InputValidation();
		switch (choiceFunction)
		{
			case 1:
			{
				DemoDynamicFlight();
				cout << endl;
				break;
			}
			case 2:
			{
				DemoDynamicFlights();
				cout << endl;
				break;
			}
			case 3:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}

void FunctionsConstructorsMenu()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.DemoMakeCopyFlight" << endl
			<< "2.DemoMakeCopyMovie" << endl
			<< "3.DemoMakeCopyTime" << endl
			<< "4. Back to the main menu" << endl;
		int choiceFunction = InputValidation();
		switch (choiceFunction)
		{
			case 1:
			{
				DemoMakeCopyFlight();
				cout << endl;
				break;
			}
			case 2:
			{
				DemoMakeCopyMovie();
				cout << endl;
				break;
			}
			case 3:
			{
				DemoMakeCopyTime();
				cout << endl;
				break;
			}
			case 4:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}

void EnumsMenu()
{
	while (true)
	{
		cout << "Enter the point from the menu:" << endl
			<< "1.WriteColor" << endl
			<< "2.CountColor" << endl
			<< "3.Exit" << endl;
		int choiceFunction = InputValidation();
		switch (choiceFunction)
		{
			case 1:
			{
				WriteColor(Red);
				cout << endl;
				break;
			}
			case 2:
			{
				const int count = 7;
				Colors colors[count] = { Red, Blue, Yellow, Green, Red,
									Red, Purple };
				cout << "Red is " << CountColor(colors, count, Red) << endl;
				cout << endl;
				break;
			}
			case 3:
			{
				return;
			}
			default:
			{
				cout << "Enter the correct point!" << endl;
			}
		}
	}
}