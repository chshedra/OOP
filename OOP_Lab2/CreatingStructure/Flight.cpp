#include <iostream>
#include "Flight.h"
using namespace std;

void DemoFlight()
{
	Flight newFlight;
	newFlight.DeparturePoint = "Moscow";
	newFlight.FinalDestination = "Seul";
	newFlight.FlightTime = 346;
	cout << "FLIGHT" << endl;
	cout << "Enter the departure point: ";
	cin >> newFlight.DeparturePoint;
	cout << "Enter the final destination: ";
	cin >> newFlight.FinalDestination;
	cout << "Enter the flight time: ";
	cin >> newFlight.FlightTime;
	cout << newFlight.DeparturePoint << " "
		<< newFlight.FinalDestination << " "
		<< newFlight.FlightTime << endl;
	//2.2.4
	Flight* pointer = &newFlight;
	cout << "Pointer" << endl
		<< pointer->DeparturePoint << " "
		<< pointer->FinalDestination << " "
		<< pointer->FlightTime << endl;
	pointer->DeparturePoint = "Tomsk";
	pointer->FinalDestination = "Dublin";
	pointer->FlightTime = 230;
	Flight* pointer2 = &newFlight;

	cout << "Pointer 1: " << pointer << endl
		<< "Pointer 2: " << pointer2 << endl;
}

void AutoFlight()
{
	const int size = 3;
	Flight array[size];
	for (int i = 0; i < size; i++)
	{
		array[i].DeparturePoint = "Point " + i;
		array[i].FinalDestination = "Destination " + i;
		array[i].FlightTime = 10 * (i + 5);
		cout << array[i].DeparturePoint << " " << array[i].FinalDestination
			<< " " << array[i].FlightTime << endl;
	}
}

Flight* MakeFlight(string departurePoint, string finalDestination, int time)
{
	Flight* flight = new Flight();

	flight->DeparturePoint = departurePoint;
	flight->FinalDestination = finalDestination;
	flight->FlightTime = time;

	return flight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();

	copiedFlight->DeparturePoint = flight.DeparturePoint;
	copiedFlight->FinalDestination = flight.FinalDestination;
	copiedFlight->FlightTime = flight.FlightTime;

	return copiedFlight;
}

void DemoMakeCopyFlight()
{
	Flight* flight = MakeFlight("Moscow", "Paris", 126);

	Flight* copyFlight1 = CopyFlight(*flight);

	cout << flight->DeparturePoint << "->"
		<< flight->FinalDestination << " : "
		<< flight->FlightTime << endl;
}

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