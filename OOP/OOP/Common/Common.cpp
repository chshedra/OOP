#include <iostream>
#include <string>
#include "Common.h"

using namespace std;


int InputValidation()
{
	string checkNumber;
	int resultNumber;
	
	while (true)
	{
		bool isCorrect = true;
		cin >> checkNumber;
		int bufsize = checkNumber.length();
		int i = 0;
		while (i < bufsize)
		{
			if (checkNumber[i] < '0' || checkNumber[i] > '9')
			{
				isCorrect = false;
				break;
			}
			i++;
		}
		resultNumber = atoi(checkNumber.c_str());
		if (resultNumber > 2147483646)
		{
			isCorrect = false;
		}
		if (isCorrect == true)
		{
			return resultNumber;
		}
		else
		{
			cout << "Введите неотрицательное целочисленное значение, "
				 << "не более чем  2 147 483 647!" << endl;
		}
	}
}


int GetPresentYear()
{
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	return newtime.tm_year + 1900;
}

