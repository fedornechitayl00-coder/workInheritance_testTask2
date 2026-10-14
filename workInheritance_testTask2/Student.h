#pragma once
#include "Human.h"

class Student 
	: public Human
{
protected:
	int course;
	int group;
	std::string faculty;
public:
	Student();
	Student(std::string name, Date birthday, int course, int group, std::string faculty);

	int getCourse() const;
	void setCourse(int course);
	int getGroup() const;
	void setGroup(int group);
	std::string getFaculty() const;
	void setFaculty(std::string faculty);

	void showInfo() const;
};

