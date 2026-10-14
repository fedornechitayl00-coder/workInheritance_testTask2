#include "Abiturient.h"

Abiturient::Abiturient()
{
    score = 0.0f;
}

Abiturient::Abiturient(std::string name, Date birthday, int course, int group, std::string faculty, float score)
    : Student(name, birthday, course, group, faculty)
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
    Student::showInfo();
    std::cout << "\nScore:\t" << score << "\n";
}
