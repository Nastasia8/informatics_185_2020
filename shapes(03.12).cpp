#include <iostream>


using namespace std;

class Shapes {
protected:
    char symbol;
    int h, w, l1;
    virtual void Paint() = 0;
};

class Square : public Shapes {
public:
    Square(int h, char symbol) {
        this->h = h;
        this->symbol = symbol;
    }
    void Paint() {
        for (int i = 1; i <= h; i++) {
            cout << "\t";
            for (int j = 1; j <= (h * 2 - 1); j++) {
                if (i == 1 || i == h) {
                    if (j % 2 != 0) { cout << symbol; }
                    else { cout << " "; }
                }
                else {
                    if (j == 1 || j == h * 2 - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }
    }
};

class Rectangle : public Shapes {
public:
    Rectangle(int h, int w, char symbol) {
        this->h = h;
        this->w = w;
        this->symbol = symbol;
    }
    void Paint() {
        for (int i = 1; i <= h; i++) {
            cout << "\t";
            for (int j = 1; j <= (w * 2 - 1); j++) {
                if (i == 1 || i == h) {
                    if (j % 2 != 0) { cout << symbol; }
                    else { cout << " "; }
                }
                else {
                    if (j == 1 || j == w * 2 - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }
    }
};

class RightTriangle : public Shapes {
public:
    RightTriangle(int l1, char symbol) {
        this->l1 = l1;
        this->symbol = symbol;
    }
    void Paint() {
        for (int i = 0; i <= l1; i++) {
            cout << "\t";
            for (int j = 0; j <= i; j++) {
                if (i > 1 && i != l1 && j > 0 && j < i) { cout << " "; }
                else { cout << symbol; }
            }
            cout << endl;
        }
        cout << "-----------------------------------------------------------" << endl;
        for (int i = 0; i <= l1; i++) {
            cout << "\t";
            for (int j = l1; j >= i; j--) {
                if (i > 0 && i != l1 - 1 && i != l1 && j < l1 && j > i) { cout << " "; }
                else { cout << symbol; }
            }
            cout << endl;
        }
    }
};

class IsoscelesTriangle : public Shapes {
public:
    IsoscelesTriangle(int h, char symbol) {
        this->h = h;
        this->symbol = symbol;
    }

    void Paint() {
        for (int i = 0; i < h; i++) {
            cout << "\t";
            for (int j = 1; j < h - i; j++) { cout << " "; }
            for (int j = h - 2 * i; j <= h; j++) {
                if (i == h - 1) {
                    for (int c = 1; c <= h * 2 - 1; c++) {
                        if (c % 2 != 0) { cout << symbol; }
                        else { cout << " "; }
                    }
                    break;
                }
                if (j == h - 2 * i || j == h - 1) { cout << symbol; }
                if (j > h - 2 * i || j < h - 1) { cout << " "; }
            }
            cout << endl;
        }
    }
};


class Rhombus : public Shapes {
public:
    Rhombus(int h, char symbol) {
        this->h = h;
        this->symbol = symbol;
    }
    void Paint() {
        if (h % 2 == 0) { h--; }
        int middle = h / 2;
        for (int i = 0; i < h; i++)
        {
            cout << "\t";
            for (int j = 0; j < h; j++)
            {
                if (i <= middle)
                {
                    if (j == middle - i || j == middle + i) { cout << symbol; }
                    else { cout << " "; }
                }
                else
                {
                    if (j == middle + i - h + 1 || j == middle - i + h - 1) { cout << symbol; }
                    else { cout << " "; }
                }
            }
            cout << endl;
        }

    }
};

int main()
{
    char symbol;
    float radius;
    int h, w, l1, l2, b, choice;// h-height w-width b-base of triangle l1 and l2 - legs of right triangle

    cout << "Choose what geometric shapes you want to see (1: Square, 2: Rectangle, 3: Right Triangle, 4: Isosceles Triangle, 5: Rhombus";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter symbol > ";
        cin >> symbol;
        cout << "Enter width and height of your square > ";
        cin >> h;
        Square shape1(h, symbol);
        shape1.Paint();
    }
    else if (choice == 2) {
        cout << "Enter symbol > ";
        cin >> symbol;
        cout << "Enter height of your rectangle > ";
        cin >> h;
        cout << "width > ";
        cin >> w;
        Rectangle shape2(h, w, symbol);
        shape2.Paint();
    }
    else if (choice == 3) {
        cout << "Enter symbol > ";
        cin >> symbol;
        cout << "Enter leg of your right triangle > ";
        cin >> l1;
        RightTriangle shape3(l1, symbol);
        shape3.Paint();
    }
    else if (choice == 4) {
        cout << "Enter symbol > ";
        cin >> symbol;
        cout << "Enter height of your isosceles triangle > ";
        cin >> h;
        IsoscelesTriangle shape4(h, symbol);
        shape4.Paint();
    }
    else if (choice == 5) {
        cout << "Enter symbol > ";
        cin >> symbol;
        cout << "Enter diagonal of your rhombus > ";
        cout << "D > ";
        cin >> h;
        Rhombus shape5(h, symbol);
        shape5.Paint();
    }
    else {
        cout << "You've chosen nothing. See you soon!";
    }
    return 0;
}