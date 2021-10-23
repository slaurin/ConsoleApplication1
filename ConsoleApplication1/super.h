#pragma once

#include <string>

class MySuperClass
{
public:
	MySuperClass(const std::string &name) { mName = name; };
	~MySuperClass() {};

	std::string getName() { return mName; };

private:
	std::string mName;

};
