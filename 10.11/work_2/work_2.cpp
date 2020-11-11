#include <iostream>
#include <ctime>
#include <string>
#include "film.h"
using namespace std;
int main()
{

    Film the_lord_of_the_rings = Film();
    the_lord_of_the_rings.show_mark();
    the_lord_of_the_rings.show_data();
    Film star_wars = Film();
    star_wars.show_mark();
    star_wars.show_data();
    return 0;
}
