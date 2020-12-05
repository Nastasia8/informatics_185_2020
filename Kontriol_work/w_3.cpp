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
    virtual string GetName()
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
        cout << "Name:" << name << "\tAge:" << age << "\tcolor" << color << "\tBreed" << breed << endl;
    }
    void Speak() override
    {
        cout << "Dog say gav gav";
    }
    string GetName() override
    {
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
        cout << "Name:" << name << "\tAge:" << age << "\tcolor" << color << "\tBreed" << breed << endl;
    }
    string GetName() override
    {
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
        cout << "Name:" << name << "\tAge:" << age << "\tcolor" << color << endl;
    }
    string GetName() override
    {
    }
};
class Person
{
public:
    Person(string name)
    {
        this->name = name;
    }
    void ShowMyPets(Animal &x)
    {
        cout << x.GetName();
    }

private:
    string name;
};
int main()
{
    Cat cot("Vasia", 3, "black", "sphinks");
    Dog sobaka("Altai", 2, "white", "alabai");
    Raccoon enot("Enot", 1, "enotnii");
    Person chelovek("Ivan");
    chelovek.ShowMyPets(cot); // Так и не разобрался, как это сделать
    return 0;                 // Пока запушил, как есть
}