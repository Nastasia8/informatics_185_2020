#include <iostream>
#include <string>
using namespace std;

class Student {
    string fio;
    int kurs;
    int group;
    int age;

    void check_kurs(int kurs){
        if ((kurs < 0) || (kurs > 5)){
            cout << "Kurs: error" << endl;
            this -> kurs = 0;
        }
    }
    void check_age(int age){
        if ((age < 17) || (age > 35)){
            cout << "Age: error" << endl;
            this -> age = 0;
        }
    }    
    void check_group(int group){
        if (group < 0){
            cout << "Group: error" << endl;
            this -> group = 0;
        }
    }
    public:

    void set_st(){
        cout << "Write: FIO, KURS, GROUP, AGE:" << endl;
        getline(cin, fio);
        cin >> kurs;
        cin >> group;
        cin >> age;
        cout << endl;
        check_age(age);
        check_group(group);
        check_kurs(kurs);
    }
    void show_st();
};

void Student :: show_st(){
    cout << endl;
    cout << "FIO: " << fio << endl;
    cout << "KURS: " << kurs << endl;
    cout << "GROUP: " << group << endl;
    cout << "AGE:" << age << endl;    
    cout << endl;
}

int main(){
    Student s;
    s.set_st();
    s.show_st();
    Student s1;
    s1.set_st();
    s1.show_st();
    Student s2;
    s2.set_st();
    s2.show_st();
}
//В выводе программа пишет в чем ошибка и обнуляет ее
//Ошибка в getline не знаю как исправить