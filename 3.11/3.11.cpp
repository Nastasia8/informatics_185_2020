#include <iostream>
#include <string>

using namespace std;

enum CarState
{
    old,
    new_c
};

class Car
{
   string model;
   string brand;
   CarState State;
   int year;
   static int k;

public:

   Car()
   {
       this-> brand = "Opel";
       this-> model = "Corsa";
       this-> year = 2016;
       this-> State = CarState::new_c;
       k++;
   }

   Car(string brand, string model, int year, CarState State)
   {
       
       this-> brand = brand;
       this-> model = model;
       this-> year = 9999;
       this-> SetYear(year);
       this-> State = State;
       k++;
   }
   
   int GetState() 
   {
       return State;
   }

   void SetState(CarState State)
   {
       this-> State = State;
   }
   
   int GetYear()
   {
       return year;
   }

   void SetYear(int year) 
   {
       if (year < 2020 && year > 1991)
       this-> year = year;
   }
   
   static int GetAmoung() 
   {
       
       return k;
   }
   
   void Show()
   {
       cout << "Brend: " << brand << "\t Model: " << model << "\t Year: " << year << "\t State:" << State << endl;
   }
};

int Car::k=0;
int main() 
{
    
    Car car("BMW", "x5", 2000, CarState::old);
    Car car1("BMVV", "M10", 2020, CarState::new_c);
    Car car2("BMG", "Faad", 2015, CarState::old);
    car.Show();
    car1.Show();
    car2.Show();
    cout << "Kol-vo: " << Car::GetAmoung() << endl;
    
    switch(car1.GetState())
    {
    case CarState::new_c:
        cout << "Car is new" << endl;
        break;
    case CarState::old:
        cout << "Car is old" << endl;
        break;
    }
    return 0;   
}
