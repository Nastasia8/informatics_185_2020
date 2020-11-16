#include <string>
#include <iostream>
#include <ctime>
#include "film.h"
using namespace std;

int main()
{     
    Film titanic;
    titanic.ShowData();
    titanic.ShowMarks();
    titanic.ShowAvRating();
    Film aurora;
    aurora.ShowData();
    aurora.ShowMarks();
    aurora.ShowAvRating();
    return 1;
}