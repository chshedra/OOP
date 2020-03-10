#include <iostream>
#include "Structures.h"
#include "FunctionsForStructures.h"
#include "StructuresAndDynamicMemory.h"
#include "FunctionConstructors.h"
#include "Enums.h"
#include "Common.h"

using namespace std;

int main()
{
	WrongPointers();

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
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.Rectangle" << endl
					<< "2.Film" << endl
					<< "3.Flight" << endl
					<< "4.Time" << endl;
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
					DemoFilm();
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
				default:
				{
					cout << "Enter the correct point!" << endl;
				}

				}
			}
		}
		case 2:
		{
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.Rectangle" << endl
					<< "2.Film" << endl
					<< "3.Flight" << endl
					<< "4.Time" << endl;
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
					AutoFilm();
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
				default:
				{
					cout << "Enter the correct point!" << endl;
				}
				}
			}
		}
		case 3:
		{
			Rectangle rectangle;
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.Read rectangle" << endl
					<< "2.Write rectangle" << endl
					<< "3.Read and write rectangle" << endl
					<< "4.Time" << endl;
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
				default:
				{
					cout << "Enter the correct point!" << endl;
				}
				}
			}
		}
		case 4:
		{
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.DemoDynamicFlight" << endl
					<< "2.DemoDynamicFlights" << endl;
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
				default:
				{
					cout << "Enter the correct point!" << endl;
				}
				}
			}
		}
		case 5:
		{
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.DemoMakeCopyFlight" << endl
					<< "2.DemoMakeCopyMovie" << endl
					<< "3.DemoMakeCopyTime" << endl;
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
				default:
				{
					cout << "Enter the correct point!" << endl;
				}
				}
			}
		}
		case 6:
		{
			while (true)
			{
				cout << "Enter the point from the menu:" << endl
					<< "1.WriteColor" << endl
					<< "2.CountColor" << endl;
				int choiceFunction = InputValidation();
				switch (choiceFunction)
				{
				case 1:
				{
					WriteColor(RED);
					cout << endl;
					break;
				}
				case 2:
				{
					const int count = 7;
					Colors colors[count] = { RED, BLUE, YELLOW, GREEN, RED,
										RED, PURPLE };
					cout << "Red is " << CountColor(colors, count, RED) << endl;
					cout << endl;
					break;
				}
				default:
				{
					cout << "Enter the correct point!" << endl;
				}
				}
			}
		}
		default:
		{
			cout << "Enter the correct point!" << endl;
		}
		}
	}
}



