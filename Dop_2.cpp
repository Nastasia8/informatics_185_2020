#include <iostream>
#include <string>
using namespace std;
class Animal
{
    protected:
    string name;
    int age;
    string color;
    public:
    Animal(int age, string color, string name )
    { this -> name=name;
      this -> age=age;
      this -> color=color;
    }
    virtual void Show()=0;
    string getName()
    {
      return name;  
    }
    virtual string  Speak()=0;
};
class Cat: public Animal
{
private:
string br;
public:
Cat(int age, string color, string name, string breed): Animal( age, color, name), br(breed)
{
}
void Show() override
{
   cout<<"Cat:"<<endl;
   cout <<"Name: "<<name <<endl;
   cout <<"Color: "<<color <<endl;
   cout <<"Age: "<<age <<endl;
   cout <<"Breed: "<<br<<endl;
}
string Speak() override
{
    return "Meow";
}
};
class Dog: public Animal
{
private:
string br;
public:
Dog(int age, string color, string name, string breed): Animal( age, color, name), br(breed)
{
}
void Show() override

{ 
   cout<<endl;; 
   cout<<"Dog: "<<endl;
   cout <<"Name: "<<name <<endl;
   cout <<"Color: "<<color <<endl;
   cout <<"Age: "<<age <<endl;
   cout <<"Breed: "<<br<<endl;
}
string Speak() override
{
    return "Gav-Gav";
}
};
class Raccoon: public Animal
{
private:
string br;
public:
Raccoon(int age, string color, string name, string breed): Animal( age, color, name), br(breed)
{
}
void Show() override

{ 
   cout<<endl;; 
   cout<<"Raccoon: "<<endl;
   cout <<"Name: "<<name <<endl;
   cout <<"Color: "<<color <<endl;
   cout <<"Age: "<<age <<endl;
   cout <<"Breed: "<<br<<endl;
}
string Speak() override
{
    return "Phyr-Phyr";
}
};
int main()
{
    Cat cat1(5, "white", "Vasiliy", "granger");
    cat1.Show();
    cout<<"Say: "<<cat1.Speak();
    cout<<endl;
    Dog dog1(10, "black", "Jack", "labrador");
    dog1.Show();
    cout<<"Say: "<<dog1.Speak();
    cout<<endl;
    Raccoon raccoon1(1, "grey", "Lisa", "gargle");
    raccoon1.Show();
    cout<<"Say: "<<raccoon1.Speak();
    return 0;
    
}