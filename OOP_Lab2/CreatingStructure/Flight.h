#pragma once
#include <iostream>
using namespace std;

struct Flight
{
	string DeparturePoint;
	string FinalDestination;
	int FlightTime;
};

void DemoFlight();
void AutoFlight();
void DemoMakeCopyFlight();
void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(Flight* flights, int count);