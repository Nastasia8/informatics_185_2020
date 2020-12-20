#include <iostream>
using namespace std;

class Figure
{
protected:
    char symbol;
    int height, width, leg;
    virtual void Draw() = 0;
};


class RightTriangle: public Figure
{
public:
    RightTriangle(int leg , char symbol)
    {
        this -> leg = leg;
        this -> symbol = symbol;
    }
    void Draw() override
    {
        for (int i = 0; i <= leg; i++) 
        {
            for (int j = 0; j <= i; j++) 
            {
                if (i > 1 && i != leg && j > 0 && j < i) { cout << " "; }
                else { cout << symbol; }
            }
            cout << endl;
        }
        for (int i = 0; i <= leg; i++) 
        {
            for (int j = leg; j >= i; j--) 
            {
                if (i > 0 && i != leg - 1 && i != leg && j < leg && j > i) { cout << " "; }
                else { cout << symbol; }
            }
            cout << endl;
        }
    }
};

class IsoscelesTriangle: public Figure
{
public:
    IsoscelesTriangle(int height, char symbol)
    {
        this -> height = height;
        this -> symbol = symbol;
    }
    void Draw() override
    {
        for (int i = 0; i < height; i++) 
        {
            for (int j = 1; j < height - i; j++) { cout << " "; }
            for (int j = height - 2 * i; j <= height; j++) 
            {
                if (i == height - 1) 
                {
                    for (int c = 1; c <= height * 2 - 1; c++) {
                        if (c % 2 != 0) { cout << symbol; }
                        else { cout << " "; }
                    }
                    break;
                }
                if (j == height - 2 * i || j == height - 1) { cout << symbol; }
                if (j > height - 2 * i || j < height - 1) { cout << " "; }
            }
            cout << endl;
        }
    }
};

class Square: public Figure
{
public:
    Square(int height, char symbol)
    {
        this -> height = height;
        this -> symbol = symbol;
    }
    void Draw() override
    {
        for (int i = 1; i <= height; i++) 
        {
            for (int j = 1; j <= (height * 2 - 1); j++) 
            {
                if (i == 1 || i == height) 
                {
                    if (j % 2 != 0) { cout << symbol; }
                    else { cout << " "; }
                }
                else 
                {
                    if (j == 1 || j == height * 2 - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }
    }
};

class Rectangle: public Figure
{
public: 
    Rectangle(int height, int width, char symbol)
    {
        this -> height = height;
        this -> width = width;
        this -> symbol = symbol;
    }
    void Draw() override
    {
        for (int i = 1; i <= height; i++) 
        {
            for (int j = 1; j <= (width * 2 - 1); j++) 
            {
                if (i == 1 || i == height) 
                {
                    if (j % 2 != 0) { cout << symbol; }
                    else { cout << " "; }
                }
                else 
                {
                    if (j == 1 || j == width * 2 - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }
    }
};

class Rhombus: public Figure
{
public:
    Rhombus(int height, char symbol)
    {
        this -> height = height;
        this -> symbol = symbol;
    }
    void Draw() override
    {
        if (height % 2 == 0) { height--; }
        int middle = height / 2;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < height; j++)
            {
                if (i <= middle)
                {
                    if (j == middle - i || j == middle + i) { cout << symbol; }
                    else { cout << " "; }
                }
                else
                {
                    if (j == middle + i - height + 1 || j == middle - i + height - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }
    }
};

class MyPaint: public Figure
{
public:
    void Draw() override
    {   
        cout <<
        "0  0  0\n"
         " 1 1 1\n"
          "  222\n"
        "0123210\n"
          "  222\n"  
         " 1 1 1\n"
        "0  0  0\n"
        << endl;
    }   
};

int main()
{
    RightTriangle RT(5, 'Z');
    RT.Draw();
    IsoscelesTriangle IT(5, 'X');
    IT.Draw();
    Square S(5, 'C');
    S.Draw();
    Rectangle R(5, 5, 'V');
    R.Draw();
    Rhombus Rh(5, 'B');
    Rh.Draw();
    MyPaint star;
    star.Draw();
}

