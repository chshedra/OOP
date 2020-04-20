#include <iostream>
using namespace std;

void SortArray(double arr[], int size);
void SearchValue(double arr[], int size, double searchValue);
void CountLetter(char arr[], int size);
int* MakeRandomArray(int size);

void DynamicMemory()
{
	//1.1.5.1
	int size = 10;
	double* array = new double[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << endl;

	//1.1.5.2
	bool* boolArray = new bool[10];
	int random;
	for (int i = 0; i < 10; i++)
	{
		random = rand() % 2 + 0;
		if (random == 1)
		{
			boolArray[i] = true;
			cout << "true ";
		}
		else
		{
			boolArray[i] = false;
			cout << "false ";
		}
	}
	delete[] boolArray;
	cout << endl;

	//1.1.5.3
	int n;
	cout << "Enter char array size: ";
	cin >> n;
	char* charArray = new char[n];
	char value;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter a[" << i << "]:";
		cin >> charArray[i];
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << charArray[i] << " ";
	}
	delete[] charArray;
	cout << endl;

	//1.1.5.4
	SortArray(array, size);
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	//1.1.5.5
	double m;
	cout << "Enter the value: ";
	cin >> m;
	SearchValue(array, size, m);
	delete[] array;
	cout << endl;

	//1.1.5.6
	char* letterArray = new char[15];
	for (int i = 0; i < 15; i++)
	{
		letterArray[i] = (char)rand() % 150 + 1;
		cout << letterArray[i] << " ";
	}

	CountLetter(letterArray, size);
	cout << endl;

	//1.1.5.7
	int arraySize;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the size of array: ";
		cin >> arraySize;
		cout << endl;
		int* dynamicArray = MakeRandomArray(arraySize);
		for (int i = 0; i < arraySize; i++)
		{
			cout << dynamicArray[i] << " ";
		}
		cout << endl;
	}
}

void SortArray(double arr[], int size)
{
	double temp = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (arr[j + 1] < arr[j])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void SearchValue(double arr[], int size, double searchValue)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == searchValue)
		{
			cout << "Index of searching value is " << i << endl;
		}
	}
}

void CountLetter(char arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{

		if ((int)arr[i] > 'a' && (int)arr < 'z')
		{
			count++;
		}
	}
	cout << "Letters in array: " << count << endl;
}

int* MakeRandomArray(int size)
{
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
	}
	return array;
}