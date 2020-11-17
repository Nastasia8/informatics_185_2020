#include <iostream>
#include <cmath>

using namespace std;

class Pendulum {
public:
    virtual float CyclicFr() = 0;// calculate cyclic frequency 
    virtual float Period() = 0; // calculate period
    virtual void TypeP() = 0; // show a type of pendulum
};

class PhisicalP : public Pendulum {
    const float PI = 3.1415;
    float mass, g, length, I;
public:
    PhisicalP(float m, float g, float E, float l) : mass(m), length(l) {

    }
    float Period() override {
        float T = 2 * PI * sqrt(I / (mass * g * length));
        return T;
    }
    float CyclicFr() override {
        float w = sqrt((mass * g * length) / I);
        return w;
    }
    void TypeP() override {
        cout << "That's a period of a phisical pendulum: " << Period() << endl;
        cout << "That's a cyclic frequency of a phisical pendulum: " << CyclicFr() << endl;
        cout << "It's a phisical pendulum" << endl;
    }
};

class MathP : public Pendulum {
    const float PI = 3.1415;
    float length, g;
public:
    MathP(float l, float g) : length(l), g(g) {

    }
    float Period() override {
        float T = 2 * PI * sqrt(length / g);
        return T;
    }
    float CyclicFr() override {
        float w = sqrt(g / length);
        return w;
    }
    void TypeP() override {
        cout << "That's a period of a math pendulum: " << Period() << endl;
        cout << "That's a cyclic frequency of a math pendulum: " << CyclicFr() << endl;
        cout << "It's a math pendulum" << endl;
    }
};

class SpringP : public Pendulum {
    const float PI = 3.1415;
    float mass, rigidity;
public:
    SpringP(float m, float r) : mass(m), rigidity(r) {

    }
    float Period() override {
        float T = 2 * PI * sqrt(mass / rigidity);
        return T;
    }
    float CyclicFr() override {
        float w = sqrt(rigidity / mass);
        return w;
    }
    void TypeP() override {
        cout << "That's a period of a spring pendulum: " << Period() << endl;
        cout << "That's a cyclic frequency of a string pendulum: " << CyclicFr() << endl;
        cout << "It's a spring pendulum" << endl;
    }

};

int main() {
    float m, g, l, k, I;
    cout << "Enter mass > ";
    cin >> m;
    cout << "Enter g > ";
    cin >> g;
    cout << "Enter length > ";
    cin >> l;
    cout << "Enter rigidity > ";
    cin >> k;
    cout << "Enter I > ";
    cin >> I;


    PhisicalP pendulum3(m, g, l, I);
    pendulum3.Period();
    pendulum3.CyclicFr();
    pendulum3.TypeP();
    MathP pendulum2(l, g);
    pendulum2.Period();
    pendulum2.CyclicFr();
    pendulum2.TypeP();
    SpringP pendulum1(m, k);
    pendulum1.Period();
    pendulum1.CyclicFr();
    pendulum1.TypeP();



    return 0;
}