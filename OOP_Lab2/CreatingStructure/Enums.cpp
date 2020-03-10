#include <iostream>
#include "Enums.h"

using namespace std;

void DemoEnums()
{
	Colors color = RED;
	Genre genre = HORROR;
	DaysOfTheWeek day = MONDAY;

	Colors colors[6] = { RED, GREEN, BLUE, PURPLE, YELLOW, ORANGE };
	Genre genres[6] = { COMEDY, DRAMA, HORROR, ACTION, BLOCKBUSTER, THRILLER };
	DaysOfTheWeek days[7] = { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
							FRIDAY, SATURDAY, SUNDAY };
}

void WriteColor(Colors color)
{
	switch (color)
	{
		case RED:
			cout << "Red color" << endl;
			break;
		case ORANGE:
			cout << "Orange color" << endl;
			break;
		case BLUE:
			cout << "Blue color" << endl;
			break;
		case YELLOW:
			cout << "Yellowcolor" << endl;
			break;
		case PURPLE:
			cout << "Purple color" << endl;
			break;
		case GREEN:
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
	case RED:
		cout << "Red color" << endl;
		return RED;
		break;
	case ORANGE:
		cout << "Orange color" << endl;
		return ORANGE;
		break;
	case BLUE:
		cout << "Blue color" << endl;
		return BLUE;
		break;
	case YELLOW:
		cout << "Yellowcolor" << endl;
		return YELLOW;
		break;
	case PURPLE:
		cout << "Purple color" << endl;
		return PURPLE;
		break;
	case GREEN:
		cout << "Green color" << endl;
		return GREEN;
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
		if (colors[i] == RED)
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
