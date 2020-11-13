#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student()
    {
        this -> fullName = "DVA";
        this -> course = 1;
        this -> group = 185;
        this -> age = 18;
    }
    Student(string fullName, int course, int group, int age)
    {
        this -> setFullName(fullName);
        this -> setCourse(course);
        this -> setGroup(group);
        this -> setAge(age);
    }
//Getters
    string getFullName() {return fullName;}
    int getCourse() {return course;}
    int getGroup() {return group;}
    int getAge() {return age;}
//Other Methods
    void Show();
private:
    string fullName;
    int course;
    int group;
    int age;
//Setters
    void setFullName(string fullName) { this -> fullName = fullName;}
    void setCourse(int course) 
    { 
        if (course > 0 && course <= 7) this -> course = course;
    }
    void setGroup(int group) 
    { 
        if (group > 0 && group < 1000) this -> group = group;
    }
    void setAge(int age) 
    { 
        if (age >= 16 && age <= 150) this -> age = age;
    }
};

void Student::Show()
{
    cout << "Student: " << getFullName() << " from the group: " << getCourse() << '/' << getGroup() << " by age: " << getAge() << endl;
}

int main()
{
    Student odin("Odin", 1, 185, 130);
    Student dva("Dva", 2, 142, 131);
    Student tree("Tree", 3, 47, 16);
    odin.Show();
    dva.Show();
    tree.Show();
    return 0;
}

