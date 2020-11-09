#include <iostream>
#include <string>

using namespace std;
class Student{
private:
  string fio;
  int course;
  int group;
  int age;



public:
Student(){
this ->fio = "fio";
this-> course = 1;
this-> group = 1;
this-> age=18;
};
Student(string fio, int course, int group, int age) 
{
    this-> fio= fio; 
   this->  course = course;
    this-> group = group;
    this-> age = age;
}

void SetInfo(string fio, int course, int group, int age){
   if (age > 16 && age <27)
   this->age =age;
   else
 cout<<endl<<"---->   Error   <---"<<endl<<endl;

   this-> fio=fio;
     
   this->group =group;
   if (course > 0 && course <5)
   this-> course=course;
   else
   cout<<endl<<"---->   Error   <---"<<endl<<endl;
}



void Show();

void GetInfo()
{
 cout << "name "<< fio<<"    course "<< course <<"    group " << group << "    age "<< age << endl;
}




};
void Student::Show(){
  cout<<endl<<"Student is cool!"<<endl;
}

int main()
 {
   Student student;
student.SetInfo("Nefedov Egor",1,185,17);
student.GetInfo();
student.SetInfo("Semenov Artem",2,184,18);
student.GetInfo();
student.SetInfo("Vasiliev Danil",3,34,20);
student.GetInfo();
student.Show();
 return 0;
}