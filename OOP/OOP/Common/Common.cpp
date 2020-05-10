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
		if (isCorrect == true)
		{
			return atoi(checkNumber.c_str());
		}
		else
		{
			cout << "Введите целочисленное значение!" << endl;
		}
	}
}

