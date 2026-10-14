#include "Student.h"

Student::Student() {

}

Student::Student(std::string name, Date birthday, int course, int group, std::string faculty) 
	: Human(name, birthday) 
{

}

int Student::getCourse() const {
	return course;
}

void Student::setCourse(int course) {
	this->course = course;
}

int Student::getGroup() const {
	return group;
}

void Student::setGroup(int group) {
	this->group = group;
}

std::string Student::getFaculty() const {
	return faculty;
}

void Student::setFaculty(std::string faculty) {
	this->faculty = faculty;
}

void Student::showInfo() const {
	Human::showInfo();
	std::cout << "\nCourse:\t" << course <<
		"\nGroup:\t" << group <<
		"\nFaculty:\t" << faculty << "\n";
}