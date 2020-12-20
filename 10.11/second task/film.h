#include <iostream>
using namespace std;

class Film
{
private:
    string name;
    int year;
    int rating[3];
public:
    float averageRaiting;
    void set ();
    float averageRate ();
    void getBest ();
};
