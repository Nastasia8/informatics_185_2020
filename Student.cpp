#include <iostream>
#include <string>

using namespace std;

class Student
{
public:

	Student(string name, int age, int course, int group)
	{
		this->setName(name);
		this->setAge(age);
		this->setCourse(course);
		this->setGroup(group);
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	int getCourse()
	{
		return course;
	}
	int getGroup()
	{
		return group;
	}
	void Show();

private:
	string name;
	int age;
	int course;
	int group;
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		if (age >= 18 && age <= 80) this->age = age;
		else
			this->course = 404;
	}
	void setCourse(int course)
	{
		if (course >= 1 && course <= 6) this->course = course;
		else
			this->course = 404;
	}
	void setGroup(int group)
	{
		if (group >= 1 && group <= 300) this->group = group;
		else
			this->group = 404;
	}
};

void Student::Show()
{
	cout << "Имя: " << name << "\n\t" << "Возраст: " << age << "\n\t" << "Курс: " << course << "\n\t" << "Группа: " << group << endl;
}

int main()
{
	Student first("Александра Ракитина", 20, 3, 123);
	Student second(" ", 2, -0, -888);
	first.Show();
	second.Show();
	cout << "\n\n" << "Значение '404' означает некоректность\n";
	return 0;
}