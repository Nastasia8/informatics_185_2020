#include <iostream>

#define PI 3.1415

using namespace std;

class Pendulum
{
private:
	string Type;
public:
	Pendulum(string type)
	{
		Type = type;
	}
	virtual ~Pendulum() {};
public:
	virtual string getType()
	{
		return Type;
	}
	virtual double getPeriod() = 0;
	virtual double getFrequency() = 0;
};

class MathPendulum : public Pendulum
{
private:
	double Length;
public:
	MathPendulum(double length)
		:Pendulum("MathPendulum")
	{
		Length = length;
	}
	~MathPendulum() {};
public:
	virtual double getPeriod() override
	{
		return 2*PI/getFrequency();
	}

	virtual double getFrequency() override
	{
		return sqrt(9.8 / Length);
	}
};

class PhysicalPendulum : public Pendulum
{
private:
	double Mass;
	double Stiffness;
public:
	PhysicalPendulum(double mass, double stiffness)
		:Pendulum("PhysicalPendulum")
	{
		Mass = mass;
		Stiffness = stiffness;
	}
	~PhysicalPendulum() {};
public:
	virtual double getPeriod() override
	{
		return 2 * PI / getFrequency();
	}

	virtual double getFrequency() override
	{
		return sqrt(Stiffness/Mass);
	}
};