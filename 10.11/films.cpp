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

void Film::set ()
{
    cout << "Name of film:";
    cin >> name ;
    cout << "Year:";
    cin >> year;
    while ((year>2020) or (year<1900))
        {
           cout << "Enter real year"<< endl;
           cin >> year;
        }
    cout << "Enter rating from 1 to 10 for: Acting out(1), Quality(2) and Interest(3)"<< endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i+1<< ":";
        cin >> rating [i];
        while ((rating[i]>10) or (rating[i]<1))
        {
           cout << "U can use only numebers 1-10, try again"<< endl;
           cin >> rating [i];
        }
      
    }
    
}
float Film::averageRate (){
    for (int i = 0; i < 3; i++)
    {
        averageRaiting+=rating[i];
    }
    averageRaiting=(averageRaiting/3);
    return averageRaiting;
}

void Film::getBest (){
    cout << "Best film is " << name << ". Its raiting: " <<averageRaiting<< endl ;
}

int main () {
    
    

    Film film1;
    film1.set();
    film1.averageRate();
   
    

    Film film2;
    film2.set();
    film2.averageRate();
    
    
    if (film1.averageRaiting > film2.averageRaiting)
    {
       
       film1.getBest ();
    }
    else 
    {
        if (film1.averageRaiting==film2.averageRaiting)
       {
          film1.getBest ();
          cout <<  "and ";
          film2.getBest ();

       }
       else 
       film2.getBest ();
    }
    
    return 0;

}