#include <iostream>
#include <cmath>

using namespace std;

class Mayatnik{
    public:
    virtual float chastota() = 0;
    virtual void period() = 0;
    virtual void tipe() = 0;
};

class Fiz_may : public Mayatnik{
    private:
    float g = 9.8;
    float pi = 3.14;
    float m, r ,i;

    public:
    Fiz_may(float m, float r, float i){
        this-> m = m;
        this-> r = r;
        this-> i = i;
    }
    float chastota() override {
        return sqrt(m*g*r/i);
    }
    void period() override{
        cout << "T= " << 2*pi*sqrt(i/(m*g*r)) << endl;
    }
    void tipe() override {
        cout << "Fizicheskiy Mayatnik" << endl;
    }
};
class Math_may : public Mayatnik{
    private:
    float g = 9.8;
    float pi = 3.14;
    float l;

    public:
    Math_may(float l){
        this-> l = l;
    }
    float chastota() override {
        return sqrt(g/l);
    }
    void period() override{
        cout << "T= " << 2*pi*sqrt(l/g) << endl;
    }
    void tipe() override {
        cout << "Math Mayatnik" << endl;
    }
};
class Pryzh_May : public Mayatnik{
    private:
    float pi = 3.14;
    float m,k;

    public:
    Pryzh_May(float m, float k){
        this-> m = m;
        this-> k = k;
    }
    float chastota() override {
        return 1/(2*pi*sqrt(m/k));
    }
    void period() override{
        cout << "T= " << 2*pi*sqrt(m/k) << endl;
    }
    void tipe() override {
        cout << "Pryzginniy Mayatnik" << endl;
    }
};

int main(){
    Fiz_may a(20, 5, 10);
    cout << "W= " << a.chastota() << endl;
    a.period();
    a.tipe();
    Math_may b(4);
    cout << "W= " << b.chastota() << endl;
    b.period();
    b.tipe();
    Pryzh_May c(20, 5);
    cout << "W= " << c.chastota() << endl;
    c.period();
    c.tipe();

}