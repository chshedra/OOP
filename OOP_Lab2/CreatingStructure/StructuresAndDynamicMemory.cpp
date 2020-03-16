#include <iostream>
#include "Structures.h"
#include "StructuresAndDynamicMemory.h"

using namespace std;

void DemoDynamicFlight()
{
	Flight* dynamicFlight = new Flight;
	dynamicFlight->DeparturePoint = "London";
	dynamicFlight->FinalDestination = "Dubai";
	dynamicFlight->FlightTime = 245;

	cout << dynamicFlight->DeparturePoint << "-> "
		<< dynamicFlight->FinalDestination << ": "
		<< dynamicFlight->FlightTime << endl;

	delete dynamicFlight;
}

void DemoDynamicFlights()
{
	//TODO: const?
	int count = 3;
	Flight* dynamicFlights = new Flight[count];

	dynamicFlights[0].DeparturePoint = "Moscow";
	dynamicFlights[0].FinalDestination = "Saint-Peterburg"; 
	dynamicFlights[0].FlightTime = 120;

	dynamicFlights[1].DeparturePoint = "Tomsk";
	dynamicFlights[1].FinalDestination = "Saint-Peterburg";
	dynamicFlights[1].FlightTime = 160;

	dynamicFlights[2].DeparturePoint = "Tomsk";
	dynamicFlights[2].FinalDestination = "Tbilisi";
	dynamicFlights[2].FlightTime = 210;

	for (int i = 0; i < count; i++)
	{
		cout << dynamicFlights[i].DeparturePoint << "-> "
			<< dynamicFlights[i].FinalDestination << ": "
			<< dynamicFlights[i].FlightTime << endl;
	}

	FindShortestFlight(dynamicFlights, count);

	delete[] dynamicFlights;
}

void FindShortestFlight(Flight* flights, int count)
{
	Flight shortFlight;
	shortFlight.FlightTime = 0;
	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightTime > shortFlight.FlightTime)
		{
			shortFlight = *flights;
		}
	}
	cout << endl;
	cout << "The shortest flight from " << shortFlight.DeparturePoint
		<< " to " << shortFlight.FinalDestination;
}