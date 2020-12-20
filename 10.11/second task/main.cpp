#include <iostream>
#include "film.h"
using namespace std;

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