#include <iostream>
using namespace std;

enum CarState{
  old,
  new_c
};

class Car{
string brand;
string model;
int year;
CarState State;
static int k;

public:
Car(){
this ->brand = "lada";
this-> model = "priora";
this-> year =2000;
this->State= old;
};

Car (string brand, string model, int year, CarState){
this ->brand = brand;
this-> model = model;
this-> SetYear(year);
this->State=CarState::new_c;
k++;

}


int SetState(CarState)
{
  return State;
}
void GetState(int year)
{if (year>2005){
 State=CarState::new_c;}
 else{
 State=CarState::old;}
}

int GetYear()
{
  return year;
}

void SetYear(int year)
{
  if (year > 1900 && year <2021)
  this-> year = year;

}
static int GetAmong(){
  cout << "col-vo "<<k<<endl;
return k;
}

void Show(){
cout <<"brand -> " <<brand <<"\t"<<"model -> "<<model<<"\t"<<"year = " <<year<<"\t"<<"state = "<<State << endl;
cout<<endl;
}
};

int Car::k=1;


int main() {

Car car("BMV","xbasic",2014,CarState::old);
Car car1;
Car car2("bmv","xrey",2010,CarState::new_c);
car1.Show();
car2.Show();
car.Show();
car.GetAmong();
 return 0;
}