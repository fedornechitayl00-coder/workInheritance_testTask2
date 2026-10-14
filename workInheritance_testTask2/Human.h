#pragma once
#include "Date.h"

class Human
{
	std::string name;
	Date birthday;
public:
	Human();
	Human(std::string name, Date birthday);

	std::string getName() const;
	void setName();
	Date getBirthdayDate() const;

	void showInfo() const;
};

