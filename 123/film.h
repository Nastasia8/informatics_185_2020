#include <iostream>
#include <string>
using namespace std;

class film {
    private:
        string name;
        int year;
        float sr;
    public:
        int  set_point (int *arr);
        float sr_point(int *arr);
        void  set_name ();
        void  set_year();
        void  get ();
};