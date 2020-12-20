#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Mayatnik
{
public:

	virtual float HHZ();
	virtual void Period();
	virtual void ShowType();
};

class Phys : public Mayatnik
{
protected:
	float m;
	float I;
	float g;
	float l;
	float pi;
	
public:
	Phys(float m, float I, float g, float l, float pi)
	{
		this->m = m;
		this->I = I;
		this->g = g;
		this->l = l;
		this->pi = pi;
	}

	float HHZ() override
	{
		cout << "Циклическая частота физического маятника " << sqrt((m*g*l) / I) << endl;

		return 0;
	}

	void Period() override
	{
		cout << "Период колебаний физического маятника " << 2 * pi*sqrt((m*g*l) / I) << endl;
	}

	void ShowType() override
	{
		cout << "Тип маятника: физический\n" << endl;
	}
};

class Math : public Mayatnik
{
protected:
	float pi;
	float g;
	float l;

public:
	Math(float pi, float g, float l)
	{
		this->pi = pi;
		this->g = g;
		this->l = l;
	}

	float HHZ() override
	{
		cout << "Циклическая частота математического мятника " << (1 / 2 * pi)*sqrt(g / l) << endl;

		return 0;
	}

	void Period() override
	{
		cout << "Период колебаний математического маятника " << 2 * pi*sqrt(l / g) << endl;
	}

	void ShowType() override
	{
		cout << "Тип маятника: математический\n" << endl;
	}
};

class Pruj : public Mayatnik
{
protected:
	float pi;
	float m;
	float k;

public:
	Pruj(float pi, float m, float k)
	{
		this->pi = pi;
		this->m = m;
		this->k = k;
	}

	float HHZ() override
	{
		cout << "Циклическая частота пружинного маятника " << (1 / 2 * pi)*sqrt(k / m) << endl;

		return (1 / 2 * pi)*sqrt(k / m);
	}

	void Period() override
	{
		cout << "Период колебаний пружинного маятника " << 2 * pi*sqrt(m / k) << endl;
	}

	void ShowType() override
	{
		cout << "Тип маятника: пружинный\n" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Phys PhysMa(5, 0.2, 9.8, 4, 3.14);
	Math MathMa(3.14, 9.8, 1);
	Pruj PrujMa(3.14, 2, 1);

	PhysMa.HHZ();
	PhysMa.Period();
	PhysMa.ShowType();

	MathMa.HHZ();
	MathMa.Period();
	MathMa.ShowType();

	PrujMa.HHZ();
	PrujMa.Period();
	PrujMa.ShowType();

	return 0;
}

float Mayatnik::HHZ()
{
	return 0.0f;
}

void Mayatnik::Period()
{
}

void Mayatnik::ShowType()
{
}
