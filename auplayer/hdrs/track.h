#pragma once
#include <iostream>
#include <string>

Class Track {
	
	std::string trackName;
	std::tm* creatDate;
	unsigned int continious;
public:

	std::string getTrackName(std::string trackName);
	std::tm* getCreatDate(std::tm* creatDate);
	unsigned int getPlaingTime (unsigned int continious);
};
