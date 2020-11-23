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
	float price, time1;
public:
	Auto(int p, string b, float pr, int t, int o) : hp(p), Brand(b), price(pr), time1(t), owning(o) {

	}

	void Calculation() override {
		if (price < 3 && time1 < 12) {
			if (hp < 100) {
				cout << "Month tax on your car is " << round((hp * 2.5 * (time1 / 12)) * 10) / 100 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << round((hp * 3.5 * (time1 / 12)) * 10) / 100 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << round((hp * 5 * (time1 / 12)) * 10) / 100 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << round((hp * 7.5 * (time1 / 12)) * 10) / 100 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << round((hp * 15 * (time1 / 12)) * 10) / 100 << "\t Brand of your car is " << Brand;
			}
		}
		else if (price < 3 && time1 >= 12) {
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 << "\t Brand of your car is " << Brand;
			}
		}
		else if (price >= 3 && price <= 5 && time1 < 12 && owning < 12) {
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 * (time1 / 12) * 1.5 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 * (time1 / 12) * 1.5 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 * (time1 / 12) * 1.5 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 * (time1 / 12) * 1.5 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 * (time1 / 12) * 1.5 << "\t Brand of your car is " << Brand;
			}
		}
		else if (price >= 3 && price <= 5 && owning >= 24 && owning <= 36) {
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 * 1.1 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 * 1.1 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 * 1.1 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 * 1.1 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 * 1.1 << "\t Brand of your car is " << Brand;
			}
		}
		else if (price >= 3 && price <= 5 && owning >= 12 && owning <= 24) {
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 * 1.3 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 * 1.3 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 * 1.3 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 * 1.3 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 * 1.3 << "\t Brand of your car is " << Brand;
			}
		}
		else if (price >= 5 && price <= 10 && owning <= 60) {
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 * 2 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 * 2 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 * 2 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 * 2 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 * 2 << "\t Brand of your car is " << Brand;
			}
		}
		else  { // calculate tax if price is more than 15 million or between 10 and 15 million and no older than 20 years
			if (hp < 100) {
				cout << "Month tax on your car is " << hp * 2.5 * 3 << "\t Brand of your car is " << Brand;
			}
			else if (hp >= 100 && hp <= 150) {
				cout << "Month tax on your car is " << hp * 3.5 * 3 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 150 && hp <= 200) {
				cout << "Month tax on your car is " << hp * 5 * 3 << "\t Brand of your car is " << Brand;
			}
			else if (hp > 200 && hp <= 250) {
				cout << "Month tax on your car is " << hp * 7.5 * 3 << "\t Brand of your car is " << Brand;
			}
			else {
				cout << "Month tax on your car is " << hp * 15 * 3 << "\t Brand of your car is " << Brand;
			}
		}
		cout << endl;
	}
};

class Bus : public Tax {
private:
	int hp, number;
	float time1;
public:
	Bus(int p, int n, int t) : hp(p), number(n), time1(t) {

	}

	void Calculation() override {
		if (time1 < 12) {
			if (hp <= 200) {
				cout << "Tax on the bus is " << round((hp * 5 * (time1 / 12)) * 10) / 100 << "\t Number of your bus is " << number;
			}
			else {
				cout << "Tax on the bus is " << round((hp * 10 * (time1 / 12)) * 10) / 100 << "\t Number of your bus is " << number;
			}
		}
		else {
			if (hp <= 200) {
				cout << "Tax on the bus is " << hp * 5 << "\t Number of your bus is " << number;
			}
			else {
				cout << "Tax on the bus is " << hp * 10 << "\t Number of your bus is " << number;
			}
		}
		cout << endl;
	}
};

class Motorcycle : public Tax {
private:
	int hp, wheels;
	float time1;
public:
	Motorcycle(int p, int w, int t) : hp(p), wheels(w), time1(t) {

	}

	void Calculation() override {
		if (time1 < 12) {
			if (hp <= 20) {
				cout << "Tax on your bike is " << round((hp * 1 * (time1 / 12)) * 10) / 100 << "\t There are " << wheels << " wheels on your bike";
			}
			else if (hp > 20 || hp <= 35) {
				cout << "Tax on your bike is " << round((hp * 2 * (time1 / 12)) * 10) / 100 << "\t There are " << wheels << " wheels on your bike";
			}
			else {
				cout << "Tax on your bike is " << round((hp * 5 * (time1 / 12)) * 10) / 100 << "\t There are " << wheels << " wheels on your bike";
			}
		}
		else {
			if (hp <= 20) {
				cout << "Tax on your bike is " << hp * 1 << "\t There are " << wheels << " wheels on your bike";
			}
			else if (hp > 20 && hp <= 35) {
				cout << "Tax on your bike is " << hp * 2 << "\t There are " << wheels << " wheels on your bike";
			}
			else {
				cout << "Tax on your bike is " << hp * 5 << "\t There are " << wheels << " wheels on your bike";
			}
		}
		cout << endl;
	}
};

class Plane : public Tax {
private:
	int hp, qm; // qm = quantity of engine
public:
	Plane(int p, int q) : hp(p), qm(q) {

	}

	void Calculation() override {
		cout << "Month tax on your plane is " << hp * 20 << "Quantity of engine on the plane " << qm;
		cout << endl;
	}

};

int main() {
	string Brand;
	int hp, number, time1, option, wheels, qm;
	float price;
	cout << "Enter 1 calculate tax on your car, 2 tax on a bus, 3 tax on your motorcycle, 4 tax on your plane >";
	cin >> option;
	if (option == 1) {
		cout << "Enter horse power of your car > ";
		cin >> hp;
		cout << "Enter price of your car(milions) > ";
		cin >> price;
		cout << "Enter months of your owning > ";
		cin >> time1;
		cout << "Enter car's brand > ";
		cin >> Brand;
		Auto auto1(hp, Brand, price, time1);
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
