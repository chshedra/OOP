#include "Route.h"



void ReadRouteFromConsole(Route& route)
{
	cout << "Введите номер маршрута: ";
	getline(cin, route.Number);

	cout << "Введите время пути: ";
	cin >> route.Timing;

	cout << "Введите частоту выезда: ";
	cin >> route.Frequency;

	cout << "Введите количество остановок: ";
	cin >> route.StopsNumber;

	route.BusStops = new string[route.StopsNumber];
	cin.ignore();
	for (int i = 0; i < route.StopsNumber; i++)
	{
		cout << "Введите остановку №" << i + 1 << ":";
		getline(cin, route.BusStops[i]);
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << "Маршрут №" << route.Number
		 << ", время в пути:" << route.Timing
		 << ", частота следования: " << route.Frequency << endl;
	cout << "Остановки: " << endl;
	for (int i = 0; i < route.StopsNumber; i++)
	{
		cout << route.BusStops[i] << endl;
	}
	
}

int FindRouteByStop(Route* routes, int stopsCount, string &stop)
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