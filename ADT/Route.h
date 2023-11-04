#pragma once

#include "Timestamp.h"
#include <string>

// �����, �������������� ����� �������� �������� �� ������ ������ � ������;
// �������� ���������� � ������� ������ � �������, ������� ������ � �������, � ����� � ���� ������.
class Route {
private:
	int ticket_price;
	std::string departure_city;
	std::string arrival_city;
	Timestamp departure_time;
	Timestamp arrival_time;

	friend class TravelService;
public:
	Route(
		int ticket_price,
		const std::string& departure_city,
		const std::string& arrival_city,
		const Timestamp& departure_time,
		const Timestamp& arrival_time);

	Route();

	Route(const Route& other);

	~Route();

	static Route createFromConsole();

	void printRouteInfo() const;

	bool operator==(const Route& other) const;

	bool operator!=(const Route& other) const;

	Route& operator=(const Route& other);

};