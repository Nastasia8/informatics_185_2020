#include <iostream>
#include <cmath>

using namespace std;

class Mayatnik
{
private:
    
public:

    virtual void nyu () = 0; // nyu = частота
    virtual void T () = 0;
    virtual void ShowType ()=0;
};

class Fiz_Mayatnik : public Mayatnik
{
private:
    string type;
    const float Pi = 3.141592;
    const float g = 9.8;
    float m,a,I;
    
public:
    Fiz_Mayatnik(float I, float m, float a){
        this->I=I;
        this->m=m;
        this->a=a;
    }
    void ShowType () override {
        cout<<endl<< "Physics mayatnik:"<< endl;
    }
    void T () override {
        cout << "T = "<< (2*Pi*sqrt(I/(m*g*a)))<< endl;
    }
    void nyu () override {
        cout << "Frequency = " << sqrt((m*g*a)/I)<< endl; 
    }
};

class Math_Mayatnik : public Mayatnik
{
private:
    const float Pi = 3.141592;
    const float g = 9.8;
    float L;
public:
    Math_Mayatnik(float L){
        this->L=L;
    }
    void ShowType () override {
        cout<<endl<< "Math mayatnik:"<< endl;
    }
    void T () override {
        cout<< "T= " << (2*Pi*sqrt(L/g))<<endl;
    }
    void nyu () override {
        cout << "Frequency= " << (1/(2*Pi)*sqrt(g/L))<< endl;
    }
};



class Pruginniy_Mayatnik : public Mayatnik
{
private:
    const float Pi = 3.141592;
    float m,k;
public:
    Pruginniy_Mayatnik(float m, float k){
        this->m=m;
        this->k=k;
    }
    void ShowType () override {
        cout<<endl<< "Pruginniy mayatnik:"<< endl;
    }
    void T () override {
        cout<< "T= " << (2*Pi*sqrt(m/k))<<endl;
    }
    void nyu () override {
        cout << "Frequency= " << (1/(2*Pi)*sqrt(k/m))<< endl;
    }
};


int main () {

    Math_Mayatnik first  (5);
    first.ShowType();
    first.T();
    first.nyu();
    Pruginniy_Mayatnik second  (10,2);
    second.ShowType();
    second.T();
    second.nyu();
    Fiz_Mayatnik Third  (5,4,4);
    Third.ShowType();
    Third.T();
    Third.nyu();
    return 0;
}


