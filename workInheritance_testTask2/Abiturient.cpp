#include "Abiturient.h"

Abiturient::Abiturient()
{
    score = 0.0f;
}

Abiturient::Abiturient(std::string name, Date birthday, float score)
    : Human(name, birthday)
{
    this->score = score;
}

float Abiturient::getScore() const
{
    return score;
}

void Abiturient::setScore(float score)
{
    this->score = score;
}

void Abiturient::showInfo() const
{
    Human::showInfo();
    std::cout << "\nScore:\t" << score << "\n";
}
