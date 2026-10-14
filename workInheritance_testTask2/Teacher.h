#pragma once
#include "Human.h"

class Teacher
	: public Human
{
protected:
	std::string position;
	std::string department;
public:
	Teacher();
	Teacher(std::string name, Date birthday, std::string position, std::string department);

	std::string getPosition() const;
	void setPosition(std::string position);
	std::string getDepartment() const;
	void setDepartment(std::string department);

	void showInfo() const;
};

