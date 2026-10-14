#pragma once
#include "Date.h"

class Human
{
protected:
	std::string name;
	Date birthday;
public:
	Human();
	Human(std::string name, Date birthday);

	std::string getName() const;
	void setName(std::string name);
	Date getBirthdayDate() const;

	void showInfo() const;
};

