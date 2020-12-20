#include <iostream>
#include<cmath>
using namespace std;
class Pendulum
{
public:
virtual void getcyclicfrequency() =0; 
virtual void getpendulumswingperiod() =0; 
virtual void showpendulumtype()=0;
};
class Physicalpendulum : public Pendulum
{
private:
float m;
float k;
public:
Physicalpendulum(float m, float k)
{
}
void getcyclicfrequency() override
{
return 2*3.14*sqrt(m/k);
}
void getpendulumswingperiod() override
{
return sqrt(k/m);
}
void showpendulumtype()
{
cout << "Physical pendulum" << endl;
}
};
class Mathematicalpendulum : public Pendulum
{
private:
float l;
public:
Mathematicalpendulum(float l)
{
}
void getcyclicfrequency() override
{
return 2*3,14*sqrt(l/9.8);
}
void getpendulumswingperiod() override
{
return sqrt(9.8/l);
}
void showpendulumtype()
{
cout << "Mathematical pendulum" << endl;
}
};
class Springloadedpendulum : public Pendulum
{
private:
float m;
float k;
public:
Springloadedpendulum(float m, float k)
{
}
void getcyclicfrequency() override
{
return 2*3.14*sqrt(m/k);
}
void getpendulumswingperiod() override
{
return sqrt(k/m);
}
void showpendulumtype()
{
cout << "Spring loaded pendulum" << endl;
}
};
int main()
{
Physicalpendulum pp(30, 50);
Mathematicalpendulum mp(25);
Springloadedpendulum slp(20, 50);
cout << "Cyclic frequency Physical pendulum: " << pp.getcyclicfrequency() <<endl; 
cout << "Pendulum swing period Physical pendulum: " << pp.getpendulumswingperiod() << endl;
cout << "Cyclic frequency Mathematical pendulum: " << mp.getcyclicfrequency() <<endl; 
cout << "Pendulum swing period Mathematical pendulum: " << mp.getpendulumswingperiod() << endl;
cout << "Cyclic frequency Spring loaded pendulum: " << slp.getcyclicfrequency() <<endl;
cout  <<"Pendulum swing period Spring loaded pendulum: " << slp.getpendulumswingperiod() << endl;
return 0;