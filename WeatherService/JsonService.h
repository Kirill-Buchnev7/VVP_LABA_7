#pragma once
#include "Weather.h"
#include <fstream>
#include "json.hpp"
#include "Service.h"
using nlohmann::json;
class JsonService :public Service
{
public:
	virtual Weather getWeather(string s) override;
	virtual ~JsonService() {};
};
