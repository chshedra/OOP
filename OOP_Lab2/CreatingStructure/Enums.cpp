#include <iostream>
#include "Genre.h"
#include "Color.h"
#include "DaysOfTheWeek.h"


using namespace std;

void DemoEnums()
{
	Colors color = Red;
	Genre genre = Horror;
	DaysOfTheWeek day = Monday;
	Colors colors[6] = { Red, Green, Blue, Purple, Yellow, Orange };
	Genre genres[6] = { Comedy, Drama, Horror, Action, Blockbuster, Thriller };
	DaysOfTheWeek days[7] = { Monday, Tuesday, Wednesday, Thursday, 
							Friday, Saturday, Sunday };
}

void WriteColor(Colors color)
{
	switch (color)
	{
		case Red:
			cout << "Red color" << endl;
			break;
		case Orange:
			cout << "Orange color" << endl;
			break;
		case Blue:
			cout << "Blue color" << endl;
			break;
		case Yellow:
			cout << "Yellowcolor" << endl;
			break;
		case Purple:
			cout << "Purple color" << endl;
			break;
		case Green:
			cout << "Green color" << endl;
			break;
		default:
			cout << "Error" << endl;
			break;
	}
}

Colors ReadColor()
{
	cout << "1-red, 2-orange, 3-blue, 4-yelloe, 5-purple, 6-green" << endl;
	int numColor;
	cin >> numColor;
	switch (numColor)
	{
		case Red:
			cout << "Red color" << endl;
			return Red;
			break;
		case Orange:
			cout << "Orange color" << endl;
			return Orange;
			break;
		case Blue:
			cout << "Blue color" << endl;
			return Blue;
			break;
		case Yellow:
			cout << "Yellowcolor" << endl;
			return Yellow;
			break;
		case Purple:
			cout << "Purple color" << endl;
			return Purple;
			break;
		case Green:
			cout << "Green color" << endl;
			return Green;
			break;
		default:
			cout << "Error" << endl;
			break;
	}
}

int CountRed(Colors* colors, int count)
{
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			count++;
		}
	}
	return count;
}

int CountColor(Colors* colors, int count, Colors findedColor)
{
	int countColor = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			countColor++;
		}
	}
	return countColor;
}
