#include "Teacher.h"
#include "Abiturient.h"
#include "Student.h"

int main()
{
	Human h1("bohdan", Date(12, 1, 1999));
	Abiturient abi1("nina", Date(10, 2, 2006), 170);
	Student stud1("huns", Date(10, 2, 2006), 1, 3, "biology");
	Teacher tech1("Tatyana", Date(28, 12, 1998), "teacher", "ncss");

	h1.Human::showInfo();
	abi1.Abiturient::showInfo();
	stud1.Student::showInfo();
	tech1.Teacher::showInfo();

	return 0;
}