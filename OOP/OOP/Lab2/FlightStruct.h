#pragma once
#include <iostream>
using namespace std;

struct Flights
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
void FindShortestFlight(Flights* flights, int count);