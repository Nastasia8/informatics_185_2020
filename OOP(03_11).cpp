#include <iostream>
#include <string>
using namespace std;

enum CarState {
	old,
	new_c
};

class Car {
	string brand, model;
	int year;
	static int k;
	CarState State;
public:
	Car() {
		this->brand = "Tesla";
		this->model = "X";
		this->year = 2020;
		this->State = CarState::new_c;
		k++;

	}
	Car(string brand, string model, int year, CarState State) {
		this->brand = brand;
		this->model = model;
		this->year = 9999;
		this->SetYear(year);
		this->State = State;
		k++;
	}

	int GetState() {
		return State;
	}

	void SetState(CarState State) {
		this->State = State;
	}

	int GetYear() {
		return year;
	}

	void SetYear(int  year) {
		if (year > 2015 && year < 2021) {
			this->year = year;
		}
	}

	static int GetAmount() {
		return k;
	}

	void Show() {
		cout << "Brand: " << brand << "\t Model: " << model << "\t Year: " << year << "\t State: " << State << endl;
	}

};

int Car::k = 0;

int main()
{
	Car car("Tesla", "S", 2017, CarState::old);
	Car car1("Tesla", "3", 2018, CarState::old);
	Car car2("Tesla", "X", 2019, CarState::old);
	Car car3("Tesla", "Y", 2020, CarState::new_c);
	car.Show();
	car1.Show();
	car2.Show();
	car3.Show();
	cout << "Amount: " << Car::GetAmount() << endl;

	switch (car3.GetState()) {
	case CarState::new_c:
		cout << "Car is new" << endl;
		break;
	case CarState::old:
		cout << "Car is old" << endl;
		break;
	}

	return 0;
}