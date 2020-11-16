#include <string>
#include <iostream>
using namespace std;
class Film
{
private:
    string name;
    int year;
    int arr[3];
    float sr_mark;
    void setMark();
    void setYear(int year);
    static void SetMax(int sr_mark);

public:
    static float count;
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
// float Film::count = 0;
