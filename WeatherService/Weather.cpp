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
	
}
