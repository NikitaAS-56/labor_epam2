#include <iostream>
#include "Header.h"

using namespace std;


int main()
{
	setlocale(0, "");
	MASIV mass(7);
	cout << endl;
	cout << "размер масива " << endl;
	mass.rasmer();
	cout << endl;

	cout << "сортировка масива " << endl;
	mass.sorting();
	cout << endl;
	cout << " масив без  3 элемента  " << endl;
	mass.delet_elem(3);
	cout << endl;

	cout << endl;
	cout << " масив c добавленым элемента  " << endl;
	mass.newelem(4, 999);
	cout << endl;

	cout << "новый размер масива" << endl;
	mass.new_rasmer(12);
	cout << endl;

	cout << " oprator []  " << mass[5];

	cout << endl;
	mass.delet();
}
