#pragma once
#include "Human.h"

class Abiturient
	: public Human
{
protected:
	float score;
public:
	Abiturient();
	Abiturient(std::string name, Date birthday, float score);
	
	float getScore() const;
	void setScore(float score);

	void showInfo() const;
};

