#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    int Age;
    string Color;
    string Name;
    string Breed;
public:
    Animal(int Age, string Color, string Name, string Breed)
    {
        this->Age = Age;
        this->Color = Color;
        this->Name = Name;
        this->Breed = Breed;
    }

    virtual void Show() = 0;
    virtual string Speak() = 0;

    string GetName()
    {
        return Name;
    }
};
class Cat : public Animal
{

public:
    Cat(int Age, string Color, string Name, string Breed) : Animal(Age, Color, Name, Breed)
    {

    }
    void Show() override
    {
        cout << Age << endl;
        cout << Color << endl;
        cout << Name << endl;
        cout << Breed << endl;
    }
    string Speak() override
    {
        return "Meow";
    }
};
int main()
{
    Cat a(15, "Grey", "Puska", "Vislouhaya");
    a.Show();
    cout << a.Speak();
    return 0;
}