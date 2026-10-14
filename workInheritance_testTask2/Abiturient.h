#pragma once
#include "Student.h"

class Abiturient
	: public Student
{
protected:
	float score;
public:
	Abiturient();
	Abiturient(std::string name, Date birthday, int course, int group, std::string faculty, float score);
	
	float getScore() const;
	void setScore(float score);

	void showInfo() const;
};

