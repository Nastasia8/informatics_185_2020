#include <string>
#include <iostream>
using namespace std;
class Film
{
private:
    string name;
    int year;
    int *arr;
    float sr_mark;
    void setMark();
    void setYear(int year);

public:
    Film()
    {
        cout << "Film's name: ";
        cin >> name;
        cout << endl;
        cout << "Year: ";
        cin >> year;
        cout << endl;
        setYear(year);
        setMark();
    }
    void show_mark();
    void show_data();
};
