#include <iostream>

using namespace std;

class Student {
private:
	string Name;
	int Course;
	string Group;
	int Age;
public:
	Student(string name, int course, string group, int age)
		: Name(name), Course(course), Group(group), Age(age)
	{

	}

	~Student() {};
public:
	void GetName()
	{
		cout << Name << endl;
	}

	void GetGroupNumber()
	{
		cout << Group << endl;
	}

	void GetCourse()
	{
		cout << Course << endl;
	}

	void GetAge()
	{
		cout << Age << endl;
	}
	void Show();
};


void Student::Show()
{
	cout << "Имя студента: ";
	this->GetName();
	cout << "Номер курса: ";
	this->GetCourse();
	cout << "Возраст студента: ";
	this->GetAge();
	cout << "Номер группы: ";
	this->GetGroupNumber();

}