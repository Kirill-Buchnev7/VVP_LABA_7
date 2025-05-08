#pragma once
#include <string>
#include <iostream>
using namespace std;
class Weather
{
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(string city, double lon, double lat, double tempereture, string weather, double windSpeed, int clouds);
};

