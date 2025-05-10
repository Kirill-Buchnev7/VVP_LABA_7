#pragma once
#include <iostream>
#include <string>
#include "pugixml-1.15/src/pugixml.hpp"  
#include "Weather.h"    
#include "Service.h" 
class XmlService : public Service {
public:
    virtual Weather getWeather(string s) override;
    virtual ~XmlService() {};
};
