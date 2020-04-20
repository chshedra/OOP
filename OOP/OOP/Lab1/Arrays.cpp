#include <iostream>
using namespace std;

void Arrays()
{
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

	cout << "All letters in array is:\n";
	for (int i = 0; i < m; i++)
	{
		if ((int)charArray[i] > 97 && (int)charArray[i] < 122)
		{
			cout << charArray[i] << " ";
		}

	}
}