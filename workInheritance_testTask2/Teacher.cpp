#include "Teacher.h"

Teacher::Teacher()
{
    position = "undefined";
    department = "undefined";
}

Teacher::Teacher(std::string name, Date birthday, std::string position, std::string department)
    : Human(name, birthday)
{
    this->position = position;
    this->department = department;
}

std::string Teacher::getPosition() const
{
    return position;
}

void Teacher::setPosition(std::string position)
{
    this->position = position;
}

std::string Teacher::getDepartment() const
{
    return department;
}

void Teacher::setDepartment(std::string department)
{
    this->department = department;
}

void Teacher::showInfo() const
{
    Human::showInfo();
    std::cout << "\nPosition:\t" << getPosition() <<
        "\nDepartment:\t" << getDepartment() << "\n";
}
