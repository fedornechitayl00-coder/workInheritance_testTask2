#include "Human.h"

Human::Human()
{
    name = "noname";
    birthday = Date(0, 0, 0);
}

Human::Human(std::string name, Date birthday)
{
    this->name = name;
}

std::string Human::getName() const
{
    return name;
}

void Human::setName(std::string name)
{
    if (!name.empty()) {
        this->name = name;
    }
}

Date Human::getBirthdayDate() const
{
    return birthday;
}

void Human::showInfo() const
{
    std::cout << "\nName:\t" << name <<
        "\nBirthday:\t" << birthday << "\n";
}
