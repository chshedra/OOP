#include <iostream>

#include <exception>

using namespace std;

void Sort(double* values, int count)
{
	double swap;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}

	if (count < 0)
	{
		throw count;
	}

}

void DemoSort()
{
	try
	{
		int count = 5;
		double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
		Sort(values, count);
		count = -1;
		Sort(values, count);
	}

	catch (int count)
	{
		cout << "count is smaller then 0: " << count <<endl;
	}
}

int main()
{
	DemoSort();
}

