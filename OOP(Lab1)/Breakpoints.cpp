#include<iostream>
using namespace std;

void Breakpoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		sum += add * i;
		add *= 1.1;
	}
	cout << "Total sum is " << sum << endl;
}


void BreakPoints()
{
	double add = 1.0;
	double sum = 0.0;
	for (int i = 0; i < 1000; i++)
	{
		sum += add * i;
		if
			(i % 3 == 0)
		{
			add *= 1.1;
		}

		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl;
}

void Breakpoint()
{
	//1.1.1.1.
	Breakpoints();
	/*
	1. sum = 0.0
	2. sum = 1.1
	3. sum = 3.5
	4. sum = 7.5
	5. sum = 13.3
	6. sum = 21.4
	7. sum = 32.05
	8. sum = 45.7
	9. sum = 62.8
	10. sum = 84.06
*/


//1.1.1.2
	BreakPoints();
	// sum = 3.2624579394327844

	//1.1.2.1
	const int size = 10;
	int sortArray[size];
	cout << "Source array is: ";
	for (int i = 0; i < size; i++)
	{
		sortArray[i] = rand() % 100 + 1;
		cout << sortArray[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (sortArray[j] > sortArray[j + 1])
			{
				int temp = sortArray[j];
				sortArray[j] = sortArray[j + 1];
				sortArray[j + 1] = temp;
			}
		}
	}
	cout << endl;
	cout << "Sorted array is: ";
	for (int i = 0; i < 10; i++)
	{
		cout << sortArray[i] << " ";
	}
	cout << endl;


	//1.1.2.2
	const int n = 12;
	int searchArray[n];
	cout << "Source array is: ";

	for (int i = 0; i < n; i++)
	{
		searchArray[i] = rand() % 100 + 1;
		cout << searchArray[i] << " ";
	}
	cout << endl;

	int searchingValue;
	int count = 0;
	cout << "Enter the value: ";
	cin >> searchingValue;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (sortArray[i] >= searchingValue)
		{
			count++;
		}
	}
	cout << endl;
	cout << "Elements of array more than " << searchingValue
		<< " = " << count << endl;

	//1.1.2.3
	const int m = 8;
	char charArray[10];
	cout << "Enter array of 8 chars: \n";
	for (int i = 0; i < m; i++)
	{
		cout << i << ": ";
		cin >> charArray[i];
		cout << endl;
	}

	cout << "All letters in array is:" << endl;
	for (int i = 0; i < m; i++)
	{
		if ((int)charArray[i] > 97 && (int)charArray[i] < 122)
		{
			cout << charArray[i] << " ";
		}

	}
	cout << endl;
}
