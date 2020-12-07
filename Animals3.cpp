#include <iostream>
#include <string>
using namespace std;

class Animals {
protected:
	string name, voice, color;
	int age;
public:
	Animals(string name, string voice, string color, int age) {
		this->name = name;
		this->voice = voice;
		this->color = color;
		this->age = age;
	}
	virtual void Show() = 0;
	string getName() {
		return name;
	}
	string Speak(){
		return voice;
	}
};

class Cat : public Animals {
protected:
	string eyecolor;
public:
	Cat(string name, string voice, string color, int age, string eyecolor):Animals(name, voice, color, age) {
		this->eyecolor = eyecolor;
	}

	void Show() override {
		cout << "Cat's name: "<<getName() << "\t Age: " << age << "\t Color: " << color << "\t Eye's color: " << eyecolor << "\n" << name << " says " << voice;
	}

};

class Dog : public Animals {
protected:
	string breed;
public:
	Dog(string name, string voice, string color, int age, string breed) :Animals(name, voice, color, age) {
		this->breed = breed;
	}

	void Show() override {
		cout << "Dog's name: " << getName() << "\t Age: " << age << "\t Color: " << color << "\t Breed: " << breed << "\n" << name << " says " << voice << endl;
	}
};

class Racoon : public Animals {
protected:
	bool answer;
public:
	Racoon(string name, string voice, string color, int age, bool answer) :Animals(name, voice, color, age) {
		this->answer = answer;
	}

	void Show() override {
		cout << "Racoon's name: " << getName() << "\t Age: " << age << "\t Color: " << color << "\t Is it a nipper " << answer << "\n" << name << " says " << voice << endl;
	}
};

class Person {
protected:
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	void ShowPet(Animals *pet) {
		cout << name << " has a pet which name is " << pet->getName();
	}
};

int main() {
	string name;

	Cat cat1("Tom", "May", "gray", 5, "green");
	Dog dog1("Jack", "Gav", "white", 3, "Staffordshire Bull Terrier");
	Racoon racoon1("Tonny", "Rrrrr", "black and white stripes", 4, true);

	cout << "Enter your name > ";
	cin >> name;

	Person person1(name);
	person1.ShowPet(&cat1);
	cout << endl;
	cat1.Show();
	cout << endl;
	person1.ShowPet(&dog1);
	cout << endl;
	dog1.Show();
	cout << endl;
	person1.ShowPet(&racoon1);
	cout << endl;
	racoon1.Show();
	return 0;
}
