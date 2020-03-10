#include <iostream>
#include <exception>

using namespace std;

void DemoSort();
void Sort(double* values, int count);

int main()
{
	DemoSort();
	return 0;
}

void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw count;
	}
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; i < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	int count = 5;
	double* values = new double[count];
	count = -1;
	try
	{
		Sort(values, count);
	}
	catch(int)
	{
		cout << "Exception caught!" << endl;
	}
}

