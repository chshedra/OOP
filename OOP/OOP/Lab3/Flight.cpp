#include "Flight.h"
#include <string>

void Flight::SetFlightNumber(string flightNumber)
{
	this->_flightNumber = flightNumber;
}

void Flight::SetDeparturePoint(string departurePoint)
{
	this->_departurePoint = departurePoint;
}

void Flight::SetDestination(string destination)
{
	this->_destination = destination;
}

void Flight::SetDepartureTime(Time departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetArriveTime(Time arriveTime)
{
	if (this->_departureTime > arriveTime)
	{
		throw("Время вылета не может быть больше времени прибытия");
	}
	this->_arriveTime = arriveTime;
}

Flight::Flight()
{
	this->SetFlightNumber(" ");
	this->SetDeparturePoint(" ");
	this->SetDestination(" ");
	Time arriveTime; // вызов конструктора без параметров
	this->SetArriveTime(arriveTime);
	Time departureTime;
	this->SetDepartureTime(departureTime);
}

Flight::Flight(string flightNumber, string departurePoint, string destination,
	Time arriveTime, Time departureTime)
{
	this->SetFlightNumber(flightNumber);
	this->SetDeparturePoint(departurePoint);
	this->SetDestination(destination);
	this->SetArriveTime(arriveTime);
	this->SetDepartureTime(departureTime);
}

string Flight::GetFlightNumber()
{
	return this->_flightNumber;
}

string Flight::GetDeparturePoint()
{
	return this->_departurePoint;
}

string Flight::GetDestination()
{
	return this->_destination;
}

Time Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time Flight::GetArriveTime()
{
	return this->_arriveTime;
}

void DemoFlightWithTime()
{
	const int size = 5;
	Flight* flights = new Flight[size];

	for (int i = 0; i < size; i++)
	{
		string writeI = std::to_string(i);
		flights[i].SetFlightNumber("S105" + writeI);
		flights[i].SetDeparturePoint("Moscow" + writeI);
		flights[i].SetDestination("Tomsk" + writeI);
		Time departureTime(2020, 1 + i, 10 + i, 12 + i, 30 + i);
		flights[i].SetDepartureTime(departureTime);
		Time arriveTime(2020, 1 + i, 10 + i, 16 + i, 59 - i);
		flights[i].SetArriveTime(arriveTime);
	}

	for (int i = 0; i < size; i++)
	{
		cout << flights[i].GetFlightNumber() << " "
			<< flights[i].GetDeparturePoint() << "-"

			<< flights[i].GetDestination() << " Вылет: "
			<< flights[i].GetDepartureTime().GetDay() << "."
			<< flights[i].GetDepartureTime().GetMonth() << "."
			<< flights[i].GetDepartureTime().GetYear() << "  "
			<< flights[i].GetDepartureTime().GetHour() << ":"
			<< flights[i].GetDepartureTime().GetMinute() << " Прилет: "

			<< flights[i].GetArriveTime().GetDay() << "."
			<< flights[i].GetArriveTime().GetMonth() << "."
			<< flights[i].GetArriveTime().GetYear() << "  "
			<< flights[i].GetArriveTime().GetHour() << ":"
			<< flights[i].GetArriveTime().GetMinute() << " Время в пути: "
			<< flights[i].GetFlightTimeMinutes().GetHour() << "ч"
			<< flights[i].GetFlightTimeMinutes().GetMinute() << "мин" << endl;
	}
}

Time Flight::GetFlightTimeMinutes()
{
	return  _arriveTime - _departureTime;
}