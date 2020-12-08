#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    void setData();          // конструтор класса
    void showData();         // вывод данных
    static void showCount(); // статический метод

private:
    string FCS;
    int course;
    int number_of_group;
    int age;
    void setAge();
    static int count; // статическая пременная
};
int main()
{
    Student student_1;
    student_1.setData();
    Student student_2;
    student_2.setData();
    Student student_3;
    student_3.setData();
    student_1.showData();
    student_2.showData();
    student_3.showData();
    Student::showCount();
    return 0;
}
void Student::setData()
{
    cout << endl;
    cout << "FCS: ";
    cin >> FCS;
    cout << endl;
    cout << "course: ";
    cin >> course;
    cout << endl;
    cout << "number_of_group: ";
    cin >> number_of_group;
    cout << endl;
    setAge();
}
void Student::setAge()
{
    cout << "age: ";
    cin >> age;
    if (age > 0 && age <= 120)
    {
        this->age = age;
    }
    else
    {
        this->age = 0;
    }

    count += 1; // счётчик
}
void Student::showData()
{
    cout << endl;
    cout << "FCS: " << FCS << "\t";
    cout << "course: " << course << "\t";
    cout << "number_of_group: " << number_of_group << "\t";
    cout << "age: " << age << "\t";
}
int Student::count = 0;   // определение статической переменной
void Student::showCount() // вывод на экран кол-ва экземпляров
{
    cout << endl;
    cout << "Total count: " << count;
}