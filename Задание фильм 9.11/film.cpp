#include <iostream>
#include <string>
#include "film.h"
using namespace std;
Film::Film(){
this ->name = "Наруто";
this-> year = 2010;
this-> reiting =4;
};

Film::Film (string name, int year, float reiting){
this ->name = name;
this-> year = year;
this-> reiting =reiting;
}

int Film::getYear()
{
  return year;
}

string Film::setName(){
 cout<<"Введите название "<<endl;
cin>>name;
return name;
}

float Film::setReiting(){
for (int i=1; i<4; i++){
cout<<i<<"-я оценка = ";
cin>> arr[i-1];
cout << endl;
  }
for (int i=0; i<3; i++){
  reiting=reiting+arr[i];
}
  reiting=reiting/3;
cout<<"рейтинг = "<<reiting<<endl;

  return reiting;}


int Film::setYear(){
int year;
cout<<"Введите год "<<endl;
cin >> year;
 if (year > 1700 && year <2021)
  this-> year = year;
  return year;
  }

void Film::Show(){
cout<<"Название "<< name<<"   Год "<<year<<"   Рейтинг "<<reiting<<endl;
reiting=0;
name="фильм";
year=2000;
}
