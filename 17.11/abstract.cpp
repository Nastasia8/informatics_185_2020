#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3.14;
const float g = 9.8;
class Maitnik
{
public:
    virtual void period() = 0;   // T
    virtual void chastota() = 0; // w
protected:
    float m;
};
class FizMaitnik : public Maitnik //T = 2*pi*sqrt(I/mgl); w = sqrt(mgl/I)
{
public:
    FizMaitnik(float m, float i, float l)
    {
        this->i = i;
        this->m = m;
        this->l = l;
    }
    void period() override
    {
        cout << "T = " << 2 * pi * sqrt(i / m * g * l) << endl;
    }
    void chastota() override
    {
        cout << "w = " << sqrt(m * g * l / i) << endl;
    }

private:
    float i;
    float l;
};
class MatMaitnik : public Maitnik //T = 2*pi*sqrt(l/g); w = sqrt(l/g)
{
public:
    MatMaitnik(float m, float l)
    {
        this->m = m;
        this->l = l;
    }
    void period() override
    {
        cout << "T = " << 2 * pi * sqrt(l / g) << endl;
    }
    void chastota() override
    {
        cout << "w = " << sqrt(l / g);
    }

private:
    float l;
};
class PrMaitnik : public Maitnik // T = 2*pi*sqrt(m/k); w = sqrt(k/m)
{
public:
    PrMaitnik(float m, float k)
    {
        this->m = m;
        this->k = k;
    }
    void period() override
    {
        cout << "T = " << 2 * pi * sqrt(m / k) << endl;
    }
    void chastota() override
    {
        cout << "w = " << sqrt(k / m);
    }

private:
    float k;
};
int main()
{
    FizMaitnik first(1, 1, 1);
    first.period();
    return 0;
}