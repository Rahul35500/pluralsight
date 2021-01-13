#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
using std::map;
struct AirPort
{
	string Name{};
	string City{};
	string Country{};
	double Latitude{};
	double Longitude{};
	int AltitudeFeet{};

	AirPort() = default;
	AirPort(string const &name, string const &city, string const &country, double latitude, double longitude, int altitudefeet)
		: Name(name), City(city), Country(country), Latitude(latitude), Longitude(longitude), AltitudeFeet(altitudefeet) {}
};
int main()
{
	std::map<string, AirPort> airportDatabase{
		{"SEA", {"Seattle Tacoma International AirPort", "Seattle", "United states", 47.44091, -122, 23423, 433}},
		{"LAX", {"Los Angles International AirPort ", "Los angles", "United States ", 33.2324, -118.2334, 124}},
		{"FCO", {"Leonardo da vinci-Fiumiciano AirPort", "Rome", "Italy", 41.2324, 12.23214, 13}},
		{"LHR", {"london hearthrow airport ", "london", "united kingdom", 51.4706, -0.45293, 13}}};

	cout << "Airport DataBase Demo\n";
	cout << "--------------------------\n";
	cout << "AirPort inique code\n";
	string code;
	cin >> code;
	cout << '\n';

	auto it = airportDatabase.find(code);
	if (it != airportDatabase.end())
	{
		AirPort const &airport = it->second;
		cout << " Aiport name :    " << airport.Name << endl;
		cout << "city:               " << airport.City << endl;
		cout << "country:              " << airport.Country << endl;
		cout << "latitude:                " << airport.Latitude << endl;
		cout << "Longitude:                 " << airport.Longitude << endl;
		cout << "Elevation(ft):                " << airport.AltitudeFeet << endl;
	}
	else
	{
		cout << "Sorry ,Airport code not found" << endl;
	}
}