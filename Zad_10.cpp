#include <iostream>
#include <string>
using namespace std;
class Human {
protected:
string name, secondname;
int age;
public:
Human(string name, string secondname, int age) {
this->name =name;
this-> secondname= secondname;
this-> age=age;
}
virtual void show()=0;
};
class Teacher : public Human{
public:
Teacher(string name, string secondname, int age, string sub) : Human(name, secondname,age), subject(sub){
}
void show() override{
cout<<"name"<<name<<endl;
cout<<"secondname"<<secondname<<endl;
cout<<"age"<<age<<endl;
cout<<"subject"<<subject<<endl;
}
private:
string subject;
};
class Student : public Human{
public:
Student(string name, string secondname, int age, string score) : Human(name, secondname,age){
}
void show() override{
cout<<"name"<<name<<endl;
cout<<"secondname"<<secondname<<endl;
cout<<"age"<<age<<endl;
cout<<"score"<<score<<endl;
}
private:
int score;
};
int main ()
{
Student h("Ivan", "Petrov", 18, 100);
h.show();
Teacher h("Petr","Ivanov", 30, "math");
h.show();
}