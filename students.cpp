#include <iostream> 
#include <string>
using namespace std;

class student {
    private:
        string fio;
        int cours, group, age;
    public:
        set_student(string fio, int cours, int group, int age){
            this -> fio = fio;
            this -> group = group;
            if (age > 17 && age < 24) 
                this -> age = age;
            else this -> age = -1;
            if (cours > 0 && cours < 4) 
                this -> cours = cours;
            else this -> cours = -1; 

        }   
        get_student(){
            cout << "FIO: " << fio << "\tGroup: " << group << "\tcourse: " << cours << "\tAge: " << age << endl;
        }
};

int main(){
    student s1;
    student s2;
    student s3;
    s1.set_student("Ivan Ivanov", 3, 184, 20);
    s1.get_student();
    s2.set_student("Petr Kruglov", 2, 2, 19);
    s2.get_student();
    s3.set_student("Alina Lavrova", -1, 1, 18); // намеренная ошибка в курсе, чтобы показать, что курс указан неверно
    s3.get_student();
    cout << "-1 - error";

}