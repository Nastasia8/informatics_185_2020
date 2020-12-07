#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal(string name, string color, int age)
    {
        this->name = name;
        this->age = age;
        this->color = color;
    }
    virtual string Speak() = 0;
    virtual string Show() = 0;
    string getName() { return name; }

protected:
    string name;
    int age;
    string color;
};

class Person
{
public:
    Person(string name)
    {
        this->name = name;
    }

    void ShowPet(Animal *pet)
    {
        cout << "У " << this->name << "есть питомец" << pet->Show() << endl;
    }

private:
    string name;
};

class Cat : public Animal
{
public:
    Cat(string name, string color, int age, string eyeColor) : Animal(name, color, age)
    {
        this->eyeColor = eyeColor;
    }
    string Speak() override
    {
        cout << "Mya";
    }
    string Show() override
    {
        cout << name << age << color << eyeColor << endl;
        return "cock";
    }

private:
    string eyeColor;
};

class Dog : public Animal
{
public:
    Dog(string name, string color, int age, string breed) : Animal(name, color, age)
    {
        this->breed = breed;
    }
    string Speak() override
    {
        cout << "Bark";
    }
    string Show() override
    {
        cout << name << age << color << breed << endl;
        return "suck";
    }

private:
    string breed;
};

class Raccoon : public Animal
{
public:
    Raccoon(string name, string color, int age, string alien) : Animal(name, color, age)
    {
        this->alien = alien;
    }
    string Speak() override
    {
        cout << "Bark";
    }
    string Show() override
    {
        cout << name << age << color << alien << endl;
        return "good luck";
    }

private:
    string alien;
};

int main()
{
    // Cat cat("Stas", "black", 29, "white");
    // cat.Show();
    // cat.Speak();
    // cout << endl;

    Dog dog("Morkova", "Orange", 199, "dachshund");
    dog.Speak();
    dog.Show();
    cout << endl;

    // Raccoon john("John", "White", 9, "yes");
    // john.Speak();
    // john.Show();
    // cout << endl;

    Person jonny("Barbara");
    jonny.ShowPet(&dog);
}
