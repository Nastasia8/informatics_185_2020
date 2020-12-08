#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    Animal(string name, int age, string color)
    {
        this->name = name;
        this->age = age;
        this->color = color;
    }
    string GetName()
    {
        return name;
    }

protected:
    virtual void Show() = 0;

    virtual void Speak() = 0;
    string name;
    int age;
    string color;
    string breed;
};
class Dog : public Animal
{
public:
    Dog(string name, int age, string color, string breed) : Animal(name, age, color)
    {
        this->breed = breed;
    }
    void Show() override
    {
        cout << "Name: " << name << "\tAge: " << age << "\tcolor: " << color << "\tBreed: " << breed << endl;
    }
    void Speak() override
    {
        cout << "Dog say gav gav";
    }
};
class Cat : public Animal
{
public:
    Cat(string name, int age, string color, string breed) : Animal(name, age, color)
    {
        this->breed = breed;
    }
    void Speak() override
    {
        cout << "Cat say myau";
    }
    void Show() override
    {
        cout << "Name: " << name << "\tAge: " << age << "\tcolor: " << color << "\tBreed :" << breed << endl;
    }
};
class Raccoon : public Animal
{
public:
    Raccoon(string name, int age, string color) : Animal(name, age, color)
    {
    }
    void Speak() override
    {
        cout << "Racoon say .....";
    }
    void Show() override
    {
        cout << "Name: " << name << "\tAge: " << age << "\tcolor: " << color << endl;
    }
};
class Person
{
public:
    Person(string name)
    {
        this->name = name;
    }
    void ShowMyPets(Animal *x)
    {
        cout << "My pet: " << x->GetName() << endl;
    }

private:
    string name;
};
int main()
{
    Cat cot("Vasia", 3, "black", "sphinks");
    Dog sobaka("Altai", 2, "white", "alabai");
    Raccoon enot("Enot", 1, "enotnii");
    cot.Show();
    sobaka.Show();
    enot.Show();
    Person chelovek("Ivan");
    chelovek.ShowMyPets(&cot);
    chelovek.ShowMyPets(&sobaka);
    chelovek.ShowMyPets(&enot);
    return 0;
}