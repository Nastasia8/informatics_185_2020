#include <iostream>
using namespace std; 
class Figure
{
public:
    virtual float getSquare() =0;
    virtual float getPerimeter() =0;
    virtual void showFigureType()=0;
};
class Rectangle : public Figure
{
private:
    float width;
    float height;
public:
    Rectangle(float w, float h) : width(w), height(h)
    {
    }
    float getSquare() override
    {
        return width * height;
    }
    float getPerimeter() override
    {
        return width * 2 + height * 2;
    }
    void showFigureType()
    {
        cout << "Rectangle" << endl;
    }
};
class Circle : public Figure
{
private:
    float radius;
public:
    Circle(float r) : radius(r)
    {
    }
    float getSquare() override
    {
        return radius * radius * 3.14;
    }
    float getPerimeter() override
    {
        return 2 * 3.14 * radius;
    }
    void showFigureType()
    {
        cout << "Circle" << endl;
    }
};
class Triangle : public Figure
{
private:
    float side1;
    float height;
    float side2;
    float side3;
public: Triangle(float s1, float h, float s2, float s3) : side1(s1), height(h), side2(s2), side3(s3) 
    {
    }
    float getSquare() override
    {
        return 0.5*side1*height;
    }
    float getPerimeter() override
    {
        return side1+side2+side3;
    }
    void showFigureType()
    {
        cout << "Triangle" << endl;
    }
};
class Trapezoid : public Figure
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
    float getSquare() override
    {
        return 0.5*(side1+side2)*height;
    }
    float getPerimeter() override
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
    Rectangle rect(30, 50);
    Circle circle(30);
    Triangle trian(20, 5, 10, 30);
    Trapezoid trap(10, 20, 20, 30, 15);
     
    cout << "Rectangle square: " << rect.getSquare() <<endl;
    cout << "Circle square: " << circle.getSquare() << endl;
    cout << "Triangle square: " << trian.getSquare() << endl;
    cout << "Trapezoid square: " << trap.getSquare() << endl;
    cout << " Rectangle perimetr " << rect.getPerimeter() << endl;
    cout << " Circle perimetr " << circle.getPerimeter() << endl;
    cout << " Triangle perimetr " << trian.getPerimeter() << endl;
    cout << " Trapezoid perimetr " << trap.getPerimeter() << endl;
 
    return 0;
}