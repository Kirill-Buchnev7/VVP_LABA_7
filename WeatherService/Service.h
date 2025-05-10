#pragma once
#include "Weather.h"
#include <clocale>

class Service
{
public:
	virtual Weather getWeather(string s) = 0;
	virtual ~Service() {}
};




