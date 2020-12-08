#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Geom
{
public:
	virtual void Perimetr();
	virtual void Square();
};

class Pryamougolnik : public Geom //Прямоугольник
{
protected:
	float a, b;

public:
	Pryamougolnik(float a, float b)
	{
		this->a = a;
		this->b = b;
	}

	void Perimetr() override
	{
		cout << "Периметр прямоугольника = " << a + a + b + b << endl;
	}

	void Square() override
	{
		cout << "Площадь прямоугольника = " << a * b << "\n" << endl;
	}
};

class Trapecia : public Geom //Трапеция
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

	void Perimetr() override
	{
		cout << "Периметр трапеции = " << a + b + c + d << endl;
	}

	void Square() override
	{
		cout << "Площадь трапеции = " << (a + b)*h / 2 << "\n" << endl;
	}
};

class Treugolnik : public Geom //Треугольник
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

	void Perimetr() override
	{
		cout << "Периметр треугольника = " << a + b + c << endl;
	}

	void Square() override
	{
		cout << "Площадь прямоугольника = " << a * h / 2 << "\n" << endl;
	}
};

class Krug : public Geom //Круг
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

	void Perimetr() override
	{
		cout << "Длина окружности = " << 2 * p*R << endl;
	}

	void Square() override
	{
		cout << "Площадь круга = " << p * R*R << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	Pryamougolnik a(4, 3);
	Trapecia b(3, 4, 6, 3, 5);
	Treugolnik c(3, 5, 2, 5);
	Krug d(3.14, 5);

	a.Perimetr();
	a.Square();

	b.Perimetr();
	b.Square();

	c.Perimetr();
	c.Square();

	d.Perimetr();
	d.Square();

	return 0;
}

void Geom::Perimetr()
{
}

void Geom::Square()
{
}