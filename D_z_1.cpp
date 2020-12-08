#include <iostream>
#include <cstring>
using namespace std;
class Student
{
private:
	string Name; 
	string Surname; 
	string Patronymic; 
	int course; 
	int group; 
	int age; 
	void SetAge(int age)
	{
		if (age >= 0 && age <= 80)
		{
			this->age = age;
		}
	}
public:
	Student()
	{
		this->Name = Name;
		this->Surname = Surname;
		this->Patronymic = Patronymic;
		this->course = course;
		this->group = group;
	}
	void Input() 
	{
		cout << "Collect information about Student" << endl;
		cout << "Name: "; cin >> Name; cout << endl;
		cout << "Surname: "; cin >> Surname; cout << endl;
		cout << "Patronymic: "; cin >> Patronymic; cout << endl;
		cout << "Course: "; cin >> course; cout << endl;
		cout << "Group: "; cin >> group; cout << endl;
		cout << "Age: "; cin >> age; cout << endl;
	}
	void Display() 
	{
		cout << "Name of Student: " << Name << endl << "Surname of " << Name << ": " << Surname << endl << " Patronymic of " << Name << " " << Surname << ": " << Patronymic << endl;
		cout << Name << " " << Surname << " " << Patronymic << " is studing on " << course << " course " << "of " << group << " group." << endl;
		cout << "Age of " << Name << " - " << age << endl;
	}

	~Student(){} 
};
int main()
{
	Student student1; 
	student1.Input();
	student1.Display();
	cout << endl;
	Student student2; 
	student2.Input();
	student2.Display();
	cout << endl;
	Student student3; 
	student3.Input();
	student3.Display();
	return 0;
}