#include <iostream>
#include <string>

using namespace std;

class Human //Класс человек
{
public:

	Human() //Конструктор по умолчанию
	{

	}

	int age;
	int weight;
	int height;
	string colorhair;
	string name;

	Human(int ageH, int weightH, int heightH, string colorhairH, string nameH) //Конструктор инициализации
	{
		age = ageH;
		weight = weightH;
		height = heightH;
		colorhair = colorhairH;
		name = nameH;
	}
	
	void Print() //Функция вывода
	{
		cout << "ФИО: " << name << "\nВозраст: " << age << "\nВес: " << weight << "\nРост: " << height << "\nЦвет Волос: " << colorhair << endl;
	}
};

class Teacher //Класс учитель, преподаватель
{
public: 

	string namelesson;
	int expyears;

	void PrintTeacher()
	{
		cout << "Преподаватель по " << namelesson << "\t Опыт \t " << expyears << endl;
	}
};

class Student //Класс студент
{
public:
	string progress; //Отлично, хорошо, удовлетворительно, неудовлетворительно
	int grade;

	void PrintStudent()
	{
		cout << "Успеваемость студента " << progress << "\t Курс студента \t " << grade << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Human firstHuman;

	firstHuman.age = 23;
	firstHuman.weight = 78;
	firstHuman.height = 180;
	firstHuman.colorhair = "Шатен";
	firstHuman.name = "Петров Иван Алексеевич";

	firstHuman.Print();

	Teacher georaphTeacher;

	georaphTeacher.namelesson = "География";
	georaphTeacher.expyears = 4;
	georaphTeacher.PrintTeacher();

	Student studentUniversity;
	studentUniversity.progress = "Хорошо";
	studentUniversity.grade = 3;
	studentUniversity.PrintStudent();

	return 0;
}