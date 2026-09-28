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