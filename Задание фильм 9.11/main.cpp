#include <iostream>
#include <string>
#include "film.h"
using namespace std;


int main() {
  setlocale(LC_CTYPE, "rus");
string name;
int year;
float reiting;
Film Film;
Film.Show();
name = Film.setName();
year = Film.setYear();
reiting = Film.setReiting();
class Film film(name,year,reiting);
Film.Show();
////////////////////////////////////////
name = Film.setName();
year = Film.setYear();
reiting = Film.setReiting();
class Film Film2(name,year,reiting);
Film.Show();
Film.Show();
 return 0;
}