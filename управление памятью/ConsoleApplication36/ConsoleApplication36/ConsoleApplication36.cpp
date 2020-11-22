#include<iostream>
#include<string>
using namespace std;

struct  student {
	double surname;
	bool name;
	string faculty;
	int group;
	string Email;
}stud[30];

struct  student1 {
	int group;
	double surname;
	string faculty;
	bool name;
	string Email;
}stud1[30];


struct  studentBSTU {
	int group;
	string surname;
	string name;
	string faculty;
	string Email;
}massstudent;

int main() {
	setlocale(0, "");
	int max;
	cin >> max;
	studentBSTU* massstudent = new studentBSTU[max];
	
	cout << "соседние элементы структуры"<<endl;
	cout << &(massstudent[0].surname) << endl;
	cout << &(massstudent[0].name) << endl<<endl;

	cout << "размер занимаемой памяти  1 структурой" << endl;
	cout << sizeof(stud);
	cout << endl;
	cout << sizeof(stud1);
	cout << endl;

	cout<<"размер памяти занимаемый масивами студентов : " << sizeof(stud);
	cout << endl;
	cout << sizeof(stud1);


	cout << endl<<"адреса полей для каждой структуры "<<endl;
	cout << &(stud[0].surname) << endl;
	cout << &(stud[0].name)<<endl;
	cout << &(stud[0].faculty) << endl;
	cout << &(stud[0].group) << endl;
	cout << &(stud[0].Email) << endl<<endl;

	cout << &(stud1[0].surname) << endl;
	cout << &(stud1[0].name) << endl;
	cout << &(stud1[0].faculty) << endl;
	cout << &(stud1[0].group) << endl;
	cout << &(stud1[0].Email) << endl<<endl;
		
	cout << "адреса каждой структуры масива"<<endl;
	for (int i=0; i < 30; i++) 
	{
			cout<<"["<< i<<"]"<< stud+i<<endl;
		
	}

	student* p = &stud[0];
	cout << &p->group<<"   ";
	cout << &p->Email;
}   