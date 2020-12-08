#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee
{
private:
	string name;
	string secondname;
	int exp;
	string work;
	string homeadress;
	string phone;
	int worktime;
	int rph; //rubles per hour

public:

	Employee(string name, string secondname, int exp, string work, string homeadress, string phone, int worktime, int rph)
	{
		this->name = name;
		this->secondname = secondname;
		this->exp = exp;
		this->work = work;
		this->homeadress = homeadress;
		this->phone = phone;
		this->worktime = worktime;
		this->rph = rph;
	}
	void income()
	{
		cout << "Зарплата сотрудника составляет " << worktime * rph << endl;
	}

	void award()
	{
		if (exp > 1 && exp <= 3) {
			cout << "Размер премии составляет " << worktime * rph * 0.03 << endl;
			cout << "Зарплата + премия равна " << worktime * rph * 0.03 + worktime * rph << endl;
		}

		if (exp > 3 && exp <= 6) {
			cout << "Размер премии составляет " << worktime * rph * 0.05 << endl;
			cout << "Зарплата + премия равна " << worktime * rph * 0.05 + worktime * rph << endl;
		}

		if (exp > 6 && exp <= 9) {
			cout << "Размер премии составляет " << worktime * rph * 0.07 << endl;
			cout << "Зарплата + премия равна " << worktime * rph * 0.07 + worktime * rph << endl;
		}

		if (exp >= 10) {
			cout << "Размер премии составляет " << worktime * rph * 0.13 << endl;
			cout << "Зарплата + премия равна " << worktime * rph * 0.13 + worktime * rph << endl;
		}
	}

	void show()
	{
		cout << "Имя сотрудника " << name << endl;
		cout << "Фамилия сотрудника " << secondname << endl;
		cout << "Опыт работы " << exp << endl;
		cout << "Должность " << work << endl;
		cout << "Домашний адрес " << homeadress << endl;
		cout << "Номер телефона " << phone << endl;
		cout << "Отработанных часов " << worktime << endl;
		cout << "Зарплата в час " << rph << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	Employee andrey("Андрей", "Алексеев", 10, "Ассистент", "г. Иваново, ул. Пушина, д. Колотушкина", "8-800-555-35-35", 12, 200);
	andrey.show();
	andrey.income();
	andrey.award();

	ofstream out; //Если убрать эту часть кода, то всё работает. Проблема с записью
	out.open("D:\\file.txt");
	if (out.is_open())
	{
		out << &andrey.show << endl;
	}
}

//Как записать метод show в файл?