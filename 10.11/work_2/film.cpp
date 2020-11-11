#include "film.h"
#include <iostream>
#include <string>
using namespace std;
//ввод оценок
void Film::setMark()
{
    cout << "Enter 3 marks" << endl;
    arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ")";
        cin >> arr[i];
        cout << endl;
    }
}
//вывод средней оценки
void Film::show_mark()
{
    sr_mark = 0;
    for (int i = 0; i < 3; i++)
    {
        sr_mark += arr[i];
    }
    cout << "Sr mark = " << sr_mark / 3 << endl;
}
//вывод названия фильма, год и средней оценки
void Film::show_data()
{
    cout << name << "\t" << year << "\t" << sr_mark << endl;
}
// ввод года с проверкой
void Film::setYear(int year)
{
    if (year > 1800 && year < 2025)
    {
        this->year = year;
    }
    else
    {
        this->year = 0;
    }
}