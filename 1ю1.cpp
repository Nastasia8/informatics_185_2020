#include <iostream>

#define PI 3.1415

class Figure
{
public:
	virtual double Perimeter() = 0;
	virtual double Square() = 0;
};

class Circle : public Figure
{
private:
	double Radius;
public:
	Circle(double radius)
	{
		Radius = radius;
	}
	~Circle() {};

public:
	virtual double Perimeter() override
	{
		return 2 * PI * Radius;
	}
	virtual double Square() override
	{
		return PI * Radius * Radius;
	}
};

class Rectangle : public Figure
{
private:
	double Length;
	double Width;
public:
	Rectangle(double length, double width)
	{
		Length = length;
		Width = width;
	}
	~Rectangle() {};

public:
	virtual double Perimeter() override
	{
		return 2 * (Length + Width);
	}
	virtual double Square() override
	{
		return Length * Width;
	}
};

class Triangle : public Figure
{
private:
	double AB;
	double AC;
	double BC;
public:
	Triangle(double ab,double ac,double bc)
	{
		AB = ab;
		AC = ac;
		BC = bc;
	}
	~Triangle() {};

public:
	virtual double Perimeter() override
	{
		return AB + AC + BC;
	}
	virtual double Square() override
	{
		double p = (AB + AC + BC) / 2;
		return sqrt(p * (p - AB) * (p - AC) * (p - BC));
	}
};

class Trapezoid : public Figure
{
private:
	double Height;
	double Base1;
	double Base2;
	double Side1;
	double Side2;
public:
	Trapezoid(double base1, double base2, double side1, double side2, double height)
	{
		Base1 = base1;
		Base2 = base2;
		Side1 = side1;
		Side2 = side2;
		Height = height;
	}
		
	~Trapezoid(){};

public:
	virtual double Perimeter() override
	{
		return Base1 + Base2, +Side1 + Side2;
	}
	virtual double Square() override
	{
		return (Base1 + Base2) / 2 * Height;
	}
};