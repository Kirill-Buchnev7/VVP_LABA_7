#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double tempereture, string weather, double windSpeed, int clouds) : 
	city(city), 
	lon(lon), 
	lat(lat), 
	temperature(tempereture), 
	weather(weather), 
	windSpeed(windSpeed), 
	clouds(clouds)
{
	cout << "Город: " << city << endl << "Долгота: " << lon << endl << "Широта: " << lat << endl << "Температура: " << temperature << endl << "Погода: " << weather << endl << "Скорость ветра: " << windSpeed << endl << "Облачность: " << clouds << endl;
}
