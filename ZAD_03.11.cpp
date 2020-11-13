
#include <iostream>
#include <string>
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
    Car()
    {
        this->brand="opel";
        this->model="sdsds23";
        this->year=2020;
        this->State=CarState::new_c;
        k++;
    }
    Car(string brand, string model, int year, CarState State)
    {this->brand=brand;
    this->model=model;
    this->year=9999;
    this->SetYear(year);
    this->State=State;
    k++;
    }
     void SetState(CarState State)
     {
         this->State=State;
     }
     CarState GetState()
     {
         return State;
     }
    int GetYear()
    {return year;
    }
    void SetYear(int year)
    {if (year>1900 && year<2021)
    this->year=year;}
    static int GetAmong()
    {
      return k 
    }
    void Show()
    {
        cout<<"brand"<<brand<<"\t model:"<<model<<"\t year"<<year<<"\t State"<<State<<endl;
    }
};
int Car::k=0;
int main()
{ 
    Car  car("bmw","sds1", -65, CarState::new_c);
    Car car1;
     Car  car2("bmw","wewewe", 1996,CarState::old );
    car1.Show();
    car2.Show();
    car.Show();
    cout<<"kol-vo"<<car.GetAmong()<<endl;
    switch(car2.GetState())
    {
        case CarState::new_c:
        cout<<"The car is new"<<endl; 
        break;
         case CarState::old:
        cout<<"The car is old"<<endl; 
        break;  }
    return 0;
}