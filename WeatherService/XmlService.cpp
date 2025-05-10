#include <iostream>
#include <string>
#include "pugixml-1.15/src/pugixml.cpp" 
#include "Weather.h"    
#include "Service.h" 
#include "XmlService.h"
using namespace std;
using namespace pugi;
Weather XmlService::getWeather(string s) {
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result) {
        throw std::exception("error while loading XML");
    }
    xml_node node = doc.child("current");
    string city = node.child("city").attribute("name").as_string(); //  Киров
    double lon = node.child("city").child("coord").attribute("lon").as_double(); // 49.6601
    double lat = node.child("city").child("coord").attribute("lat").as_double(); // 58.5966
    double temperature = node.child("temperature").attribute("value").as_double(); // 5.69
    string weather = node.child("weather").attribute("value").as_string(); // дождь
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double(); // 4.27
    int clouds = node.child("clouds").attribute("all").as_int(); // 100

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
