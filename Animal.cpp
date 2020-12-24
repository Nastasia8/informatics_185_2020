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
        this->Name = Name;
        this->Color = Color;
        this->Age = Age;
    }
    virtual void Show() = 0;
    string getName()
    {
        return Name;
    }
    virtual string Speak() = 0;
};
class Cat : public Animal
{
private:
    string Br;
public:
    Cat(int Age, string Color, string Name, string Breed) : Animal(Age, Color, Name), Br(Breed)
    {

    }
    void Show() override
    {
        cout << Name << endl;
        cout << Color << endl;
        cout << Age << endl;
    }
    string Speak() override
    {
        return "Meow!";
    }
};
int main()
{
    Cat a(27, "white", "Vasiliy", "Granger");
    a.Show();
    cout << a.Speak();

    return 0;
}