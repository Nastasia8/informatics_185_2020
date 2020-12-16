#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Geom
{
public:
	virtual void P(); //Периметр
	virtual void S(); //Площадь 
};
class Pryamougolnik : public Geom 
{
protected:
	float a, b;
public:
	Pryamougolnik(float a, float b)
	{
		this->a = a;
		this->b = b;
	}
	void P() override
	{
		cout << "Perimetr Pryamougolnika= " << (a+b)*2 << endl;
	}
	void S() override
	{
		cout << "Ploshad Pryamougolnika= " << a*b   << endl;
	}
};
class Trapecia : public Geom 
{
protected:
	float a, b, c, d, h;

public:
	Trapecia(float a, float b, float c, float d, float h)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->h = h;
	}
	void P() override
	{
		cout << "Perimetr Trapecii= " << a + b + c + d << endl;
	}
	void S() override
	{
		cout << "Ploshad Trapecii= " << (a + b)*h / 2  << endl;
	}
};
class Treugolnik : public Geom 
{
protected:
	float a, b, c, h;
public:
	Treugolnik(float a, float b, float c, float h)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->h = h;
	}
	void P() override
	{
		cout << "Perimetr Treugolnika= " << a + b + c << endl;
	}
	void S() override
	{
		cout << "Ploshad Treugolnika= " << a * h / 2  << endl;
	}
};
class Krug : public Geom 
{
protected:
	float p;
	float R;
public:
	Krug(float p, float R)
	{
		this->p = p;
		this->R = R;
	}
	void P() override
	{
		cout << "Dlinna okruzhnosti= " << 2 * p*R << endl;
	}
	void S() override
	{
		cout << "Ploshad kruga= " << p * R*R << endl;
	
	    cout << "Я позаимствовал задачку, но что смог, то поменял, не судите строго пожалуйста <3" << endl;
	}
};
int main(){
	setlocale(LC_ALL, "ru");
	Pryamougolnik a(9, 5);
	Trapecia b(2, 7, 1, 9, 4);
	Treugolnik c(2, 4, 3, 5);
	Krug d(3.14, 11);
	a.P();
	a.S();
	b.P();
	b.S();
	c.P();
	c.S();
	d.P();
	d.S();
	return 0;
}
void Geom::P(){
}
void Geom::S(){
} 