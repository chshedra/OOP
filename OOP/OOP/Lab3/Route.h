#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Route
{
	string Number;
	double Timing;
	double Frequency;
	string* BusStops ;
	int StopsNumber;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);
//TODO: +Строку по ссылке?
int FindRouteByStop(Route* routes, int stopsCount, string &stop);