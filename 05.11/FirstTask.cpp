#include <iostream>
#include <string>

using namespace std;
class Student
{
private:
    string FIO;
    int curse,group,age;
    int True =1;
    void Proverka ();
public:
    void set(string,int,int,int);
    void Show ();

};
void Student::set (string FIO,int curse,int group, int age){
    this->FIO=FIO;
    this->curse=curse;
    this->group=group;
    this->age=age;
    Proverka ();
}
void Student::Proverka (){
        if ((curse>5 or curse<1) or (group<1 or group >240) or (age>100 or age < 17 ))
        {
            True = 0;
        }
        
        
    }

void Student::Show (){
    if (True==0)
        cout << endl << "You entered incorrect information about this student, try again"<< endl;
    else
        cout <<endl << FIO << ", " << curse << "/" << group << ", " << age << " years"<< endl;
}


int main () {
    Student First;
    First.set ("Shkolnikov Dmitriy Romanovich",1,185,18);
    First.Show ();
    Student Second;
    Second.set ("Ivanov Ivan Ivanovich",21,185,18);
    Second.Show ();
    Student Third;
    Third.set ("Pupkin Vasya Valentinovich",3,42,20);
    Third.Show ();
    Student Fourth;
    Fourth.set ("Putin Vladimir Vladimirovich",4,35,200);
    Fourth.Show ();
    return 0;    
}