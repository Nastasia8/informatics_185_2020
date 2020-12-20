#include <iostream>
using namespace std;
class Transport
{
public:
    virtual float nalog() = 0; // расчет налога
    virtual void show() = 0;

protected:
    float v; // обём
    float stavka;
    float cost;         // цена в миллионах (для машин)
    int time_of_having; // в месяцах
};
//Автомобиль
class Avto : public Transport // ЦЕНА В МИЛЛИОНАХ
{
public:
    Avto(float v, float cost, float year, int time_of_having)
    {
        this->cost = cost;
        setV(v);
        this->year = year;
        this->time_of_having = time_of_having;
    }
    float nalog() override;
    void show() override
    {
        cout << endl;
        cout << " Cost of car: " << this->cost << endl;
    }

private:
    float arr[5] = {2.5, 3.5, 5, 7.5, 15};
    void setV(float v); // небольшая проверка объёма двигателя (можно было проверить и год, но уже не интересно)
    float k = 1;
    float year;
};
//Мотоцикл
class Moto : public Transport
{
public:
    Moto(float v, int time_of_having)
    {
        this->v = v;
        this->time_of_having = time_of_having;
    }
    float nalog() override
    {
        if (v <= 20)
        {
            stavka = 1;
        }
        if (20 < v <= 35)
        {
            stavka = 2;
        }
        if (v > 35)
        {
            stavka = 5;
        }
        return stavka * v * time_of_having / 12;
    }
    void show() override
    {
        cout << endl;
        cout << "V of moto: " << v << " л. с." << endl;
    }
};
// Автобус
class Bus : public Transport
{
public:
    Bus(float v, int time_of_having)
    {
        this->v = v;
        this->time_of_having = time_of_having;
    }
    float nalog() override
    {
        if (v <= 200)
        {
            stavka = 5;
        }
        else
        {
            stavka = 10;
        }
        return stavka * v * time_of_having / 12;
    }
    void show() override
    {
        cout << endl;
        cout << "V of bus: " << v << " l. s." << endl;
    }
};
// Воздушные виды транспорта
class areaTransport : public Transport
{
public:
    areaTransport(float v, int time_of_having)
    {
        this->v = v;
        this->time_of_having = time_of_having;
    }
    float nalog() override
    {
        return 25 * v * time_of_having / 12;
    }
    void show() override
    {
        cout << endl;
        cout << "V of aerotransport: " << v << " l. c." << endl;
    }
};
int main()
{
    Avto car(270, 4, 2017.5, 12); //Avto(float v, float cost, int year, int time_of_having)
    cout << "Nalog on car " << car.nalog() << " rub";
    car.show();
    return 0;
}
void Avto::setV(float v)
{
    if (v < 0)
    {
        this->v = 0;
        cout << "Error of V (v < 100)" << endl;
    }
    else
    {
        this->v = v;
    }
}
float Avto::nalog()
{
    //расчет налога (табл 1)
    if (v <= 100)
    {
        this->stavka = arr[0];
    }
    int s = 100;
    for (int i = 0; i < 4; i++)
    {
        if (v > s && v <= (s + 50))
        {
            this->stavka = arr[i + 1];
        }
        s += 50;
    }
    // Расчет коэффицента
    if ((cost > 3) && (cost <= 5))
    {
        if (2020 - year < 1)
        {
            k = 1.5;
        }
        if ((2020 - year >= 1) && (2020 - year < 2))
        {
            k = 1.3;
        }
        if (((2020 - year) >= 2) && ((2020 - year) < 3))
        {
            k = 1.1;
        }
    }
    if ((5 <= cost) && (cost < 10) && 2020 - year <= 5)
    {
        k = 2;
    }
    if (((10 <= cost) && (cost < 15)) && (2020 - year <= 10))
    {
        k = 3;
    }
    if ((cost > 15) && (2020 - year <= 20))
    {
        k = 3;
    }
    //Итого
    return v * k * stavka * time_of_having / 12;
}
