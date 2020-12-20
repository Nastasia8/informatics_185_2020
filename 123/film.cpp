#include <iostream>
#include <string>
#include "film.h"
using namespace std;



            int  film::set_point(int *arr)
            {
            for ( int i = 0; i < 3; i++){
                int a;
                cin >> a;
                arr[i] = a;
            }
            return *arr;
            }
            float film::sr_point(int *arr)
            {
            int sum=0;
            for (int i = 0; i < 3; i++)
            {
                
                sum += arr[i];
                
            }
            sr = sum / 3;
            return sr;
            }
            void film::set_name(){
                cin >> name;
            }
            void film::set_year(){
                cin >> year;
            }
            void film::get(){
            cout << name << endl;
            cout << year << endl;
            cout << sr << endl;
            }



