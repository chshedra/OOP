#include <iostream>
#include "Arrays.h"
#include "Breakpoints.h"
#include "Functions.h"
#include "Pointers.h"
#include "DynamicMemory.h"
using namespace std;

int InputValidation();

void main()
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

int InputValidation()
{
	int number = 0;

	while (true)
	{
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Try again!\n";
		}
		else
		{
			break;
		}
	}

	return number;
}