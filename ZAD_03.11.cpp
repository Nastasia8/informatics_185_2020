#include <iostream>
#include <string>
using namespace std;
class Car{
    string brand;
    string model;
    int year;
    static int k;
    public:
    Car()
    {
        this->brand="opel";
        this->model="sdsds23";
        this->year=2020;
    }
    Car(string brand, string model, int year)
    {this->brand=brand;
    this->model=model;
    this->year=9999;
    this->SetYear(year);
    k++;
    }

    int GetYear()
    {return year;
    }
    void SetYear(int year)
    {if (year>1900 && year<2021)
    this->year=year;}
    static int GetAmong()
    {
      return k; 
    }
    void Show()
    {
        cout<<"brand"<<brand<<"\t model:"<<model<<"\t year"<<year<<endl;
    }
};
int Car::k=0;
int main()
{ 
    Car  car("bmw","sds1", -65);
    car.Show();
    cout<<"kol-vo"<<Car::GetAmong<<endl;
    return 0;
}