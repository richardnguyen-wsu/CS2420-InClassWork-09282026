//This is the first Apple file for the day. Called Applev3, just to make all the files in the folder the same version.

#ifndef APPLE_H
#define APPLE_H

#include <string>

class Apple {
public:
	Apple() { color = "", weight = 0; }
	Apple(std::string c, double w) {
		color = c;
		weight = w;
	}
	bool operator==(Apple& other) {
		return color == other.color && weight == other.weight;
	}
private:
	std::string color;
	double weight;
};

#endif