#include "Teacher.h"
#include "Abiturient.h"

int main()
{
	Human h1("bohdan", Date(12, 19, 1999));
	Abiturient abi1("nina", Date(10, 2, 2006), 1, 4, "biology", 170);
	Teacher tech1("Tatyana", Date(8, 22, 1998), "teacher", "ncss");

	h1.showInfo();
	abi1.showInfo();
	tech1.showInfo();

	return 0;
}