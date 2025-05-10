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
<<<<<<< HEAD
	cout << "Город: " << city << endl << "Долгота: " << lon << endl << "Широта: " << lat << endl << "Температура: " << temperature << endl << "Погода: " << weather << endl << "Скорость ветра: " << windSpeed << endl << "Облачность: " << clouds << endl;
=======
	cout << "Город: " << city << std::endl;
	cout << "Координаты: " << lon << "° в.д., "
		<< lat << "° с.ш." << std::endl;
	cout << "Температура: " << temperature << "°C" << std::endl;
	cout << "Погода: " << weather << std::endl;
	cout << "Скорость ветра: " << windSpeed << " м/с" << std::endl;
	cout << "Облачность: " << clouds << "%" << std::endl;
>>>>>>> feature-xml
}
