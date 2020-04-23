#include "Route.h"

void DemoRoute()
{
	const int size = 3;
	Route routes[size];
	for (int i = 0; i < size; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	for (int i = 0; i < size; i++)
	{
		WriteRouteToConsole(routes[i]);
	}
	cout << "������� ��������� ��� ������ ��������: ";
	string author;
	cin >> author;
	int index = FindRouteByStop(routes, size, author);
	if (index == -1)
	{
		cout << "������� �� ������" << endl;
	}
	else
	{
		WriteRouteToConsole(routes[index]);
	}
}

void ReadRouteFromConsole(Route& route)
{
	cout << "������� ����� ��������: ";
	cin.ignore();
	getline(cin, route.Number);
	cout << "������� ����� ����: ";
	cin >> route.Timing;
	cout << "������� ������� ������: ";
	cin >> route.Frequency;
	cout << "������� ���������� ���������: ";
	cin >> route.StopsNumber;

	route.BusStops = new string[route.StopsNumber];
	cin.ignore();
	for (int i = 0; i < route.StopsNumber; i++)
	{
		cout << "������� ������ �" << i + 1 << ":";
		getline(cin, route.BusStops[i]);
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << "������� �" << route.Number;
	cout << ", ����� � ����:" << route.Timing;
	cout << ", ������� ����������: " << route.Frequency << endl;
	cout << "���������: ";
	for (int i = 0; i < route.StopsNumber; i++)
	{
		cout << route.BusStops[i] << endl;
		
	}
	
}

int FindRouteByStop(Route* routes, int stopsCount, string stop)
{
	for (int i = 0; i < stopsCount; i++)
	{
		for (int j = 0; j < routes[i].StopsNumber; j++)
		{
			if (routes[i].BusStops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}