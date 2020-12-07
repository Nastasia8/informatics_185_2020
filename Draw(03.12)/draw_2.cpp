#include <iostream>
#include <string>
using namespace std;
class Figur
{
public:
    Figur(char x)
    {
        this->x = x;
    }

protected:
    char x;
};
class PriTreugol : public Figur
{
public:
    PriTreugol(char x) : Figur(x)
    {
    }
    void up()
    {
        int l;
        int k = 0;
        cout << "Vedi dlinu gipotenuzi: ";
        cin >> l;
        cout << x << endl;
        for (int i = 0; i < l - 2; i++)
        {
            cout << x;
            for (int j = 0; j < k; j++)
            {
                cout << " ";
            }
            k += 1;
            cout << x;
            cout << endl;
        }
        for (int i = 0; i < k + 2; i++)
        {
            cout << x;
        }
    }
    void down()
    {
        int l;

        cout << "Vedi dlinu gipotenuzi: ";
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            cout << x;
        }
        cout << endl;
        for (int i = 0; i < l + 1; i++)
        {
            cout << x;
            for (int j = 0; j < l - 3; j++)
            {
                cout << " ";
            }
            l -= 1;
            cout << x << endl;
        }
        cout << x << endl;
    }
};
class Kvadrat : public Figur
{
public:
    Kvadrat(char x) : Figur(x)
    { //  В конструкторе лучше так не делать? Просто не хочестся нагромождать методами
        int l;
        int k;
        cout << "Vedi storonu kvadrata: ";
        cin >> l;
        for (int i = 0; i < l; i++)
        {
            cout << x << " ";
        }
        cout << endl;
        for (int i = 0; i < l - 2; i++)
        {
            cout << x;
            for (int j = 0; j < 2 * l - 3; j++)
            {
                cout << " ";
            }
            cout << x << endl;
        }
        for (int i = 0; i < l; i++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};
class Priamugolnik : public Figur
{
public:
    Priamugolnik(char x) : Figur(x)
    {
        int a, b;
        cout << "Vedi dlinu: ";
        cin >> a;
        cout << endl
             << "Vedi shirinu: ";
        cin >> b;
        cout << endl;
        for (int i = 0; i < a; i++)
        {
            cout << x << " ";
        }
        cout << endl;
        for (int i = 0; i < b - 2; i++)
        {
            cout << x;
            for (int j = 0; j < 2 * a - 3; j++)
            {
                cout << " ";
            }
            cout << x << endl;
        }
        for (int i = 0; i < a; i++)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};
class Romb : public Figur
{
public:
    Romb(char x) : Figur(x)
    {
        int a;
        int y = 1;

        cout << "Vedi storonu: ";
        cin >> a;
        int z = a - 2;
        for (int i = 0; i < a - 1; i++)
        {
            cout << " ";
        }
        cout << x;
        cout << endl;
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < z; j++)
            {
                cout << " ";
            }
            cout << x;
            for (int d = 0; d < y; d++)
            {
                cout << " ";
            }
            cout << x << endl;
            y += 2;
            z--;
        }
        z = 1;
        y = 2 * a - 5;
        for (int i = 0; i < a - 2; i++)
        {
            for (int j = 0; j < z; j++)
            {
                cout << " ";
            }
            cout << x;
            for (int g = 0; g < y; g++)
            {
                cout << " ";
            }
            cout << x << endl;
            z++;
            y -= 2;
        }
        for (int i = 0; i < a - 1; i++)
        {
            cout << " ";
        }
        cout << x << endl;
    }
};
int main()
{
    Romb q(42);
    Priamugolnik e(42);
    Kvadrat s(42);
    PriTreugol x(42);
    x.down();
    x.up();
    return 0;
}