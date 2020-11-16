#include <string>
#include <iostream>
using namespace std;

class Film
{
public:
    //Constructor
    Film()
    {
        //Process of constructing class
        setName();
        cout << endl;
        setYear();
        cout << endl;
        setMarks();
        cout << endl;
    }
    //Public functions outside the class
    void ShowMarks();
    void ShowData();
    void ShowAvRating();
private:
    //Private functions outside the class
    int setYear();
    int setMarks();
    string setName();
    //Private parameters
    string name;
    int year;
    int *marks;
    float av_rating;
};