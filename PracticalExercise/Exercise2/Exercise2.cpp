#include <string>
#include <iostream>
#include <ctime>
#include "film.h"
using namespace std;

void findMaxRate(string nameA, float A, string nameB, float B)
{   
    if (A < B)
    {
        cout << "Film with max rate: " << nameB << ":" << B << endl;
    }
    else
    {
        cout << "Film with max rate: " << nameA << ":" << A << endl;   
    }
}

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
    //Film with max rate
    findMaxRate(titanic.getName(), titanic.getAvRating(), aurora.getName(), aurora.getAvRating());
    return 1;
}