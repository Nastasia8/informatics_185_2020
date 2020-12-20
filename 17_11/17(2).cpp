
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Tax {
public:
	virtual void Calculation() = 0;
};

class Auto : public Tax {
private:
	string Brand;
	int hp, owning;
	float price, time1, multiplier, hpCost, tax;
public:
	Auto(int p, string b, float pr, int t, int o) : hp(p), Brand(b), price(pr), time1(t), owning(o) {
	}
	void Calculation() override {
		if (hp <= 100) { hpCost = 2.5; }
		else if (100 < hp && hp <= 150) { hpCost = 3.5; }
		else if (150 < hp && hp <= 200) { hpCost = 5; }
		else if (200 < hp && hp <= 250) { hpCost = 7.5; }
		else if (250 < hp) { hpCost = 15; }
		//Set multiplier
		//between 3 and 5 millions
		if ((3 <price && price <= 5) && (24 < owning && owning <= 36)) { multiplier = 1.1; }
		else if ((3 < price && price <= 5) && (12 <= owning && owning <= 24)) { multiplier = 1.3; }
		else if ((3 < price && price <= 5) && (12 > owning)) { multiplier = 1.5; }
		//between 5 and 10 millions
		else if (5 < price && price <= 10 && owning < 60) { multiplier = 2; }
		//between 10 and 15 millions
		else if ((10 < price && price <= 15) && owning < 120) { multiplier = 3; }
		// more than 15 millions
		else if (price > 15 && owning < 240) { multiplier = 3; }
		//Calculate
		tax = multiplier * hp * hpCost;
		cout << "Multipier: " << multiplier << "\thorse power: " << hp << " hpCost: " << hpCost << endl;
		cout << "Your tax for this car is:" << tax << endl;
		}
};

class Bus : public Tax {
private:
	int hp, number;
	float time1, result;
public:
	Bus(int p, int n, int t) : hp(p), number(n), time1(t) {

	}

	void Calculation() override {
		if (time1 < 12) {
			if (hp <= 200) { result = hp * 5 * (time1 / 12); }
			else { result = hp * 10 * (time1 / 12); }
		}
		else {
			if (hp <= 200) { result = hp * 5; }
			else { result = hp * 10; }
		}
		cout << "Tax on the bus is " <<result<< "\t Number of your bus is " << number;
	}
};

class Motorcycle : public Tax {
private:
	int hp, wheels;
	float time1, result;
public:
	Motorcycle(int p, int w, int t) : hp(p), wheels(w), time1(t) {

	}

	void Calculation() override {
		if (time1 < 12) {
			if (hp <= 20) {result = hp * 1 * (time1 / 12); }
			else if (hp > 20 && hp <= 35) {result = hp * 2 * (time1 / 12);}
			else {result = hp * 5 * (time1 / 12);}
		}
		else {
			if (hp <= 20) { result = hp * 1; }
			else if (hp > 20 && hp <= 35) { result = hp * 2; }
			else { result = hp * 5; }
		}
		cout << "Tax on your bike is " << result << "\t There are " << wheels << " wheels on your bike";
	}
};

class Plane : public Tax {
private:
	int hp, qm; // qm = quantity of engine
public:
	Plane(int p, int q) : hp(p), qm(q) {

	}

	void Calculation() override {
		cout << "Month tax on your plane is " << hp * 20 << "\tQuantity of engine on the plane " << qm;
		cout << endl;
	}

};

int main() {
	string Brand;
	int hp, number, time1, option, wheels, qm, owning;
	float price;
	cout << "Enter 1 calculate tax on your car, 2 tax on a bus, 3 tax on your motorcycle, 4 tax on your plane >";
	cin >> option;
	if (option == 1) {
		cout << "Enter horse power of your car > ";
		cin >> hp;
		cout << "Enter price of your car(millions) > ";
		cin >> price;
		cout << "Enter months of your owning > ";
		cin >> time1;
		cout << "Enter car's brand > ";
		cin >> Brand;
		cout << "How old is your car, enter this value (months)";
		cin >> owning;
		Auto auto1(hp, Brand, price, time1, owning);
		auto1.Calculation();
	}
	else if (option == 2) {
		cout << "Enter horse power of a bus > ";
		cin >> hp;
		cout << "Enter the number of the bus > ";
		cin >> number;
		cout << "Enter (months) how old this bus is > ";
		cin >> time1;
		Bus bus1(hp, number, time1);
		bus1.Calculation();
	}
	else if (option == 3) {
		cout << "Enter horse power of your bike > ";
		cin >> hp;
		cout << "Enter how many wheels your bike has > ";
		cin >> wheels;
		cout << "Enter months of your owning > ";
		cin >> time1;
		Motorcycle bike(hp, wheels, time1);
		bike.Calculation();
	}
	else if (option == 4) {
		cout << "Enter horse power of your plane > ";
		cin >> hp;
		cout << "Enter the quantity of engine on your plane > ";
		cin >> qm;
		Plane plane1(hp, qm);
		plane1.Calculation();

	}
	else {
		cout << "There is no such option";
	}
	return 0;
}
