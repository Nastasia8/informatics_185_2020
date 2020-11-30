#include <iostream>
#include <string>
#include "film.h"
using namespace std;

//Show array of marks
void Film::ShowMarks()
{
    for (int i = 0; i < 3; i++) 
    { cout << marks[i] << "\t"; }
    cout << endl;
}

string Film::getName()
{
    return name;
}

float Film::getAvRating()
{  
    return av_rating;
}

//Show parameters of the class Film
void Film::ShowData()
{   
    cout << "Name: " << name << " Year: " << year << endl;
}

//Calculate and show average rating
void Film::ShowAvRating()
{   
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[i];
    }
    float av_rating;
    av_rating = sum / 3;
    cout << "Average rating: "<< av_rating << endl;
}

//Setting year with some validation
int Film::setYear()
{
    cout << "Year of the film: ";
    cin >> year;
    if (year > 1880 && year < 2025) { return year;}
    else { setYear(); }
}

//Setting name
string Film::setName()
{   
    cout << "Name of the film: ";
    cin >> name;
    return name;
}

//Setting marks with help of user input
void Film::setMarks()
{
    cout << "Marks of the film: ";
    marks = new int[3];
    for (int i = 0; i < 3; i++) { cin >> marks[i]; }
}