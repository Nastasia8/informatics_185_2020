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
	void CheckData();
	void Enter();
	void Show();
};

int main() {
	Student student1;
	student1.Enter();
	Student student2;
	student2.Enter();
	Student student3;
	student3.Enter();
	student1.Show();
	student2.Show();
	student3.Show();
	student1.CheckData();
	return 0;
}

void Student::Enter() {
	cout << "Data about student: " << endl;
	cout << "Enter your name > ";
	cin >> name;
	cout << "Enter your course > ";
	cin >> course;
	cout << "Enter number of your group > ";
	cin >> group;
	cout << "Enter your age > ";
	cin >> age;

}

void Student::Show() {
	cout << "Name: " << name << "\t Course: " << course << "\t Group: " << group << "\t Age: " << age << endl;
}

void Student::CheckData() {
	if (Student::age < 0 || Student::group < 0 || Student::course < 0) {
		cout << "You've entered the wrong data";
	}
	else if (Student::age < 17) {
		cout << "You'r not a student cause of your age";
	}

}