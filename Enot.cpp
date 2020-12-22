#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    int Age;
    string Color;
    string Name;
public:
    Animal(int Age, string Color, string Name)
    {
        this->Age = Age;
        this->Color = Color;
        this->Name = Name;
    }

    virtual void Show() = 0;
    virtual string Speak() = 0;

    string GetName()
    {
        return Name;
    }
};
class Raccoon : public Animal
{

public:
    Raccoon(int Age, string Color, string Name) : Animal(Age, Color, Name)
    {

    }
    void Show() override
    {
        cout << Age << endl;
        cout << Color << endl;
        cout << Name << endl;
    }
    string Speak() override
    {
        return "Frrr";
    }
};
int main()
{
    Raccoon a(13, "Orange", "LehaSana");
    a.Show();
    cout << a.Speak();
    return 0;
}
