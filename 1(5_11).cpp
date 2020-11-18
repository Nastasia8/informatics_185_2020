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
	student2.CheckData();
	student3.CheckData();
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
	if (age < 0 || group < 0 || course < 0) {
		cout << "You've entered the wrong data";
	}
	else if (age < 17) {
		cout << name << " you'r not a student cause of your age";
	}

}
