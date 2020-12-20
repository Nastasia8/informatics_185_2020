#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Pendulum
{
public:
    Pendulum()
    {
        string type = "None";
    }
    virtual void CalculateCyclicFrequency() = 0;
    virtual void CalculateOscillationPeriod() = 0;
    void ShowType()
    {
        cout << type << endl;
    }
    string type;
};

class SpringPendulum : public Pendulum
{
public:
    SpringPendulum(float m, float g, float l, float I, float k)
    {
        this->m = m;
        this->g = g;
        this->l = l;
        this->I = I;
        this->k = k;

        string type = "Spring Pendulum";
    }
    void CalculateCyclicFrequency() override
    {
        float result = sqrt(m * g * l / I);
        cout << "Cyclic Frequency: " << result << endl;
    }
    void CalculateOscillationPeriod() override
    {
        float result = 2 * 3.14 * sqrt(m / k);
        cout << "Oscillation Periods: " << result << endl;
    }

private:
    float m;
    float g;
    float l;
    float I;
    float k;
};

class MathematicalPendulum : public Pendulum
{
public:
    MathematicalPendulum(float g, float l)
    {
        this->g = g;
        this->l = l;
        string type = "Mathematical Pendulum";
    }
    void CalculateCyclicFrequency() override
    {
        float result = sqrt(g / l);
        cout << "Cyclic Frequency: " << result << endl;
    }
    void CalculateOscillationPeriod() override
    {
        float result = 2 * 3.14 * sqrt(l / g);
        cout << "Oscillation Periods: " << result << endl;
    }

private:
    float g;
    float l;
};

class PhysicalPendulum : public Pendulum
{
public:
    PhysicalPendulum(float J, float m, float g, float l)
    {
        this->J = J;
        this->m = m;
        this->g = g;
        this->l = l;
        string type = "Physical Pendulum";
    }
    void CalculateCyclicFrequency() override
    {
        float result = sqrt(g / l);
        cout << "Cyclic Frequency: " << result << endl;
    }
    void CalculateOscillationPeriod() override
    {
        float result = 2 * 3.14 * sqrt(J / m * g * l);
        cout << "Oscillation Periods: " << result << endl;
    }

private:
    float J;
    float m;
    float g;
    float l;
};

int main()
{
    SpringPendulum SpPe(1, 1, 1, 1, 1);
    SpPe.CalculateCyclicFrequency();
    SpPe.CalculateOscillationPeriod();
    SpPe.ShowType();

    MathematicalPendulum MaPe(1, 1);
    MaPe.CalculateCyclicFrequency();
    MaPe.CalculateOscillationPeriod();
    MaPe.ShowType();

    PhysicalPendulum PhPe(1, 1, 1, 1);
    PhPe.CalculateCyclicFrequency();
    PhPe.CalculateOscillationPeriod();
    PhPe.ShowType();

    return 1;
}