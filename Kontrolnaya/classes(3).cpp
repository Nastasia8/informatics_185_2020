
#include <iostream>
using namespace std;

class Animal {
protected:
string name, color;
float age;

public:
    Animal(string c, float a) {
        color=c;
        age=a;

    }
virtual void getName () = 0;

virtual void Show () =0;

virtual void Speak () =0;;

};

class Cat : public Animal
{
string Breed;



public:
   Cat(string c, float a,string b) : Animal(c,a), Breed(b){
       
       getName ();
    
   }
    void getName () override {
        cout<< "What is this animal name? ";
        cin >> name;
    
    }
    void Show () override {
        cout << "Name: " << name << " Age: " << age << " Color: " << color << " Breed: " << Breed<<endl;
    }
    void Speak () override {
        cout << name << " says myau"<<endl;
    }
    
};

class Dog : public Animal
{
string Breed;



public:
   Dog(string c, float a,string b) : Animal(c,a), Breed(b){
       
       getName ();
    
   }
    void getName () override {
        cout<< "What is this animal name? ";
        cin >> name;
    
    }
    void Show () override {
        cout << "Name: " << name << " Age: " << age << " Color: " << color << " Breed: " << Breed<<endl;
    }
    void Speak () override {
        cout << name << " says myau"<<endl;
    }
    
};
class Racoon : public Animal
{
string Kind;



public:
   Racoon(string c, float a,string k) : Animal(c,a), Kind(k){
       
       getName ();
    
   }
    void getName () override {
        cout<< "What is this animal name? ";
        cin >> name;
    
    }
    void Show () override {
        cout << "Name: " << name << " Age: " << age << " Color: " << color << " Kind: " << Kind<<endl;
    }
    void Speak () override {
        cout << name << " says myau"<<endl;
    }
    
};




int main () {
    
    Cat Kot ("Black",15,"Meykun");
    Kot.Show();
    Kot.Speak();
    
    Dog sobaka ("White", 10 ,"Dalmatain");
    sobaka.Show();
    sobaka.Speak();

    Racoon puloskum ("Grey", 2, "Procyon loto");
    puloskum.Show ();
    puloskum.Speak();
    return 0;
}