#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Transport
{
public:
    Transport(int age, float cost, float power)
    {
        this -> age = age;
        this -> cost = cost;
        this -> power = power;
    }
    virtual void Show() = 0;
    virtual void CalculateTax() = 0;
//Variables
    int age;
    //cost in millions!
    float cost;
    float power;
};

class Car: public Transport
{   
public:
    string brand;
    Car(int age, float cost, float power, string brand):Transport(age, cost, power)
    {
        this -> brand = brand;
        Show();
        CalculateTax();
    }

    void Show() override
    {
        cout << "Brand:" << brand << " age:" << age << " cost: " << cost << " Horse powers: " << power << endl;
    }

    void CalculateTax() override
    {
        float multiplier = 1;
        float tax;
        float hpCost;
    //Set hpCost
        if (power <= 100){ hpCost = 2.5; }
        else if (100 < power && power <= 150){ hpCost = 3.5; }
        else if (150 < power && power <= 200){ hpCost = 5; }
        else if (200 < power && power <= 250){ hpCost = 7.5; }
        else if (250 < power){ hpCost = 15; }
    //Set multiplier
        //between 3 and 5 millions
        if ((3 < cost && cost <= 5) && (2 < age && age <= 3 )){ multiplier = 1.1; }
        else if ((3 < cost && cost <= 5) && (1 <= age && age <= 2 )){ multiplier = 1.3; }
        else if ((3 < cost && cost <= 5) && (1 > age)){ multiplier = 1.5; }
        //between 5 and 10 millions
        else if (5 < cost && cost <= 10 && age < 5){ multiplier = 2; }
        //between 10 and 15 millions
        else if ((10 < cost && cost <= 15) && age < 10){ multiplier = 3; }
        // more than 15 millions
        else if (cost > 15 && age < 20){ multiplier = 3; }
    //Calculate
        tax = multiplier * power * hpCost;
        cout << "Multipier: " << multiplier << " power: " << power << " hpCost: " << hpCost << endl;
        cout << "Your tax for this car is:" << tax << endl;
    }
};


class Motorcycle: public Transport
{
public:
    string isTwoSeater; 
    Motorcycle(int age, float cost, float power, string isTwoSeater):Transport(age, cost, power)
    {
        this -> isTwoSeater = isTwoSeater;
        Show();
        CalculateTax();
    }

    void Show() override
    {
        cout << "Is two seater:" << isTwoSeater << " age:" << age << " cost: " << cost << " Horse powers: " << power << endl;
    }

    void CalculateTax() override
    {
        float tax;
        float hpCost;
    //Set hpCost
        if (power <= 20){ hpCost = 1; }
        else if (20 < power && power <= 35){ hpCost = 2; }
        else if (power > 35){ hpCost = 5; }
    //Calculate 
        tax = power * hpCost;
        cout << " Power: " << power << " hpCost: " << hpCost << endl;
        cout << "Your tax for this motorcycle is:" << tax << endl;
    }
};

class Bus: public Transport
{
public: 
    string seatCount;
    Bus(int age, float cost, float power, string seatCount):Transport(age, cost, power)
    {
        this -> seatCount = seatCount;
        Show();
        CalculateTax();
    }

    void Show() override
    {
        cout << "Count of seats:" << seatCount << " age:" << age << " cost: " << cost << " Horse powers: " << power << endl;
    }

    void CalculateTax() override
    {
        float tax;
        float hpCost;
    //Set hpCost
        if (power <= 200){ hpCost = 5; }
        else if (power > 200){ hpCost = 10; }
    //Calculate
        tax = power * hpCost;
        cout << " Power: " << power << " hpCost: " << hpCost << endl;
        cout << "Your tax for this bus is:" << tax << endl;
    }

};

class Aircraft: public Transport
{
public:
    string company;
    Aircraft(int age, float cost, float power, string company):Transport(age, cost, power)
    {
        this -> company = company;
        Show();
        CalculateTax();
    }

    void Show()
    {
        cout << "Belongs to:" << company << " age:" << age << " cost: " << cost << " Horse powers: " << power << endl;
    }

    void CalculateTax() override
    {
        float tax;
        float hpCost = 25;
    //Calculate
        tax = power * hpCost;
        cout << " Power: " << power << " hpCost: " << hpCost << endl;
        cout << "Your tax for this aircraft is:" << tax << endl;
    }
};

int inputAge(){int age; cout << "Age: "; cin >> age; return age;}
float inputCost(){float cost; cout << "Cost: "; cin >> cost; return cost;}
float inputPower(){float power; cout << "Power: "; cin >> power; return power;}

string inputUnique(string transport)
{
    string unique; 
    cout << transport << ": "; 
    cin >> unique; 
    return unique;
}

int main()
{
    //age, cost, power, unique
    float b, c;
    int a;
    string unique;
//Car
    cout << "For car:" << endl;
    a = inputAge();
    b = inputCost();
    c = inputPower();
    unique = inputUnique("Brand");
    Car car(a, b, c, unique);
//Motorcycle
    cout << "For Motorcycle:" << endl;
    a = inputAge();
    b = inputCost();
    c = inputPower();
    unique = inputUnique("Is two seater");
    Motorcycle motorcycle(a, b, c, unique);
//Bus
    cout << "For bus:" << endl;
    a = inputAge();
    b = inputCost();
    c = inputPower();
    unique = inputUnique("Seat count");
    Bus bus(a, b, c, unique);
//Aircraft 
    cout << "For aircraft:" << endl;
    a = inputAge();
    b = inputCost();
    c = inputPower();
    unique = inputUnique("Company");
    Aircraft aircraft(a, b, c, unique);
    return 1;
}