// Example program
#include <iostream>
#include <string>
using namespace std;

enum CarState
{
    old,
    new_
};

class Car
{
    string brand;
    string model;
    int year;
    static int k;
    CarState State;


public:
    Car()
    {
        this -> brand = "opel";
        this -> model = "astra";
        this -> year = 2019;
        this -> State = CarState::new_;
        k++;

        
    }
    Car(string brand, string model, int year, CarState State)
    {
        this -> brand = brand;
        this -> model = model;
        this -> year = 99999;
        this -> setYear(year);
        k++;
    }

    CarState GetState()
    {
        return State;
    }
    
    static int getCount()
    {
        return k;
    }

    int getYear()
    {
        return year;
    }
    void setState(CarState State)
    {
        this -> State = State;
    }
    void setYear(int year)
    {
        if (year > 2000 && year < 2020)
        {
            this -> year = year;
        }
    }

    void Show()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int Car::k = 0;
int main()
{
    //Car car = Car("bmw", "m3", 2019);
    Car car("bmw", "m3", 2019, CarState::new_);
    car.Show();
    Car car2("VAZ", "21012", 2008, CarState::old);
    car2.Show();
    cout << "Count of cars: " << Car::getCount();
    return 0;
}

