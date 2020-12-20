#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string name;
	int course;
	int group;
	int age;

public:

	void ShowInfo();

	void EnterInfo();

private:
	void SetGroup(int group)
	{
		if (group > 0 && group < 1000)
			this->group = group;
	}

	void SetCourse(int course)
	{
		if (course > 0 && course < 5)
			this->course = course;
	}

	void SetAge(int age)
	{
		if (age > 17 && age < 90)
			this->age = age;
	}
};

void Student::EnterInfo()
{
	cout << "Введите ФИО студента " << endl;
	cin >> name;

	cout << "Введите курс студента " << endl;
	cin >> course;

	cout << "Введите группу студента " << endl;
	cin >> group;

	cout << "Введите возраст студента " << endl;
	cin >> age;
}

void Student::ShowInfo()
{
	cout << "ФИО студента " << name << endl;
	cout << "Курс студента " << course << endl;
	cout << "Группа студента " << group << endl;
	cout << "Возраст студента " << age << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	Student Man1;
	Man1.EnterInfo();
	Man1.ShowInfo();

	Student Man2;
	Man2.EnterInfo();
	Man2.ShowInfo();

	Student Man3;
	Man3.EnterInfo();
	Man3.ShowInfo();
}