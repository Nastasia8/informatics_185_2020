#include <iostream>
#include <string>
using namespace std;

class Film{
string name;
int year;
int arr[3];
float reiting=0;
public:
int setYear();
float setReiting();
string setName();
int getYear();
void Show();
Film();
Film(string name, int year, float reiting);
};
