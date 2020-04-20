#include <iostream>
#include "Arrays.h"
#include "Breakpoints.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"
#include "Menu.h"
#include "../Common/Common.h"
using namespace std;


void Lab1Menu()
{
	while (true)
	{
		cout << "1.Breakpoints" << endl
			<< "2.Array" << endl
			<< "3.Functions" << endl
			<< "4.Pointers and adresses" << endl
			<< "5.Dynamic memory" << endl;
		int choice = InputValidation();
		switch (choice)
		{
		case 1:
		{
			Breakpoint();
			break;
		}
		case 2:
		{
			Arrays();
			break;
		}
		case 3:
		{
			Functions();
			break;
		}
		case 4:
		{
			Pointers();
		}
		case 5:
		{
			DynamicMemory();
		}
		default:
		{
			cout << "Enter the correct item!" << endl;
		}
		}
	}
}
