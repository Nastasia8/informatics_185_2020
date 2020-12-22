#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	Student()
	{
		this->name = "No name";
		this->age = 0;
		this->course = 0;
		this->group = 0;
	}
	Student(string name, int age, int course, int group)
	{
		this->setName(name);
		this->setAge(age);
		this->setCourse(course);
		this->setGroup(group);
	}
	string getName() { return name; }
	int getAge() { return age; }
	int getCourse() { return course; }
	int getGroup() { return group; }
	void Show();

private:
	string name;
	int age;
	int course;
	int group;
	void setName(string name) { this->name = name; }
	void setAge(int age)
	{
		if (age >= 17 && age <= 100) this->age = age;
		else
			this->age = 0;
	}
	void setCourse(int course)
	{
		if (course > 0 && course <= 6) this->course = course;
		else
			this->course = 0;
	}
	void setGroup(int group)
	{
		if (group > 0 && group <= 999) this->group = group;
		else
			this->group = 0;
	}
};

void Student::Show()
{
	cout << "name: " << name << "\nage: " << age << "\ncourse: " << course << "\ngroup: " << group << "\n_  _  _  _  _  _  _  _  _  _  _  _\n\n";
}

int main()
{
	Student firstDurachek("Lupa Pupson", 11, 1, 111);
	Student secondDurachek("Ivan Ivanov", 19, 2, 123);
	Student thirdDurachek("No name", -1, -1, -1);
	firstDurachek.Show();
	secondDurachek.Show();
	thirdDurachek.Show();
	cout << "If you have 0 or 'No name' in the fields, then the data was incorrect\n";
	return 0;
}