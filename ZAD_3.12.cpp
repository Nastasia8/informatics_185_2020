#include <iostream>
using namespace std;
class Figur
{
public:
virtual float getS() =0;
virtual float getP() =0;
virtual void showFigureType()=0;
};
class Rectangle : public Figur
{
private:
float width;
float height;
public:
Rectangle(float w, float h) : width(w), height(h)
{
}
float getS() override
{
return width * height;
}
float getP() override
{
return width * 2 + height * 2;
}
void showFigureType()
{
cout << "Rectangle" << endl;
}
};
class Circle : public Figur
{
private:
float radius;
public:
Circle(float r) : radius(r)
{
}
float getS() override
{
return radius * radius * 3.14;
}
float getP() override
{
return 2 * 3.14 * radius;
}
void showFigureType()
{
cout << "Circle" << endl;
}
};
class Triangle : public Figur
{
private:
float side1;
float height;
float side2;
float side3;
public: Triangle(float s1, float h, float s2, float s3) : side1(s1), height(h), side2(s2), side3(s3)
{
}
float getS() override
{
return 0.5*side1*height;
}
float getP() override
{
return side1+side2+side3;
}
void showFigureType()
{
cout << "Triangle" << endl;
}
};
class Trapezoid : public Figur
{
private:
float side1;
float side4;
float side2;
float side3;
float height;
public: Trapezoid(float s1, float s4, float s2, float s3, float h) : side1(s1), side4(s4), side2(s2), side3(s3), height(h)
{
}
float getS() override
{
return 0.5*(side1+side2)*height;
}
float getP() override
{
return side1+side2+side3+side4;
}
void showFigureType()
{
cout << "Trapezoid" << endl;
}
};

int main()
{
Rectangle rect(15, 20);
Circle circle(10);
Triangle trian(5, 7, 8, 12);
Trapezoid trap(11, 30, 15, 40, 20);

cout << "Rectangle s: " << rect.getS() <<endl;
cout << "Circle s: " << circle.getS() << endl;
cout << "Triangle s: " << trian.getS() << endl;
cout << "Trapezoid s: " << trap.getS() << endl;
cout << " Rectangle p " << rect.getP() << endl;
cout << " Circle p" << circle.getP() << endl;
cout << " Triangle p " << trian.getP() << endl;
cout <<" Trapezoid p " << trap.getP() << endl;

return 0;
}