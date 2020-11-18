#include <iostream>
#include <ctime>
#include <string>
#include "film.h"
using namespace std;
int main()
{
    Film film_1 = Film();
    film_1.show_mark();
    film_1.show_data();
    Film film_2 = Film();
    film_2.show_mark();
    film_2.show_data();
    cout << "max sr mark = " << Film::count;
    return 0;
}
