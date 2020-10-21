//Shkolnikov Dmitriy

#include <iostream>
#include <cmath>
using namespace std;

void s (float,float);
void p (float,float);
void s (float);
void p (float);
void s (float ,float , float);
void p (float ,float , float,float);

float r=5;
float pi=3.14;
float a = 2 ;
float b=5;
float h=4;
float c=5;
float d=4;

 int main () {
     s (r,pi);
     p (r,pi); 
     s (a);
     p (a);   
     s (a,b,h);
     p (a,b,d,c);
     
     
        return 0;
    }
void s (float r,float pi){
    
    cout << "S kruga = " << (pi*pow(r,2))<<endl;
    
    }    
void p (float r ,float pi) {
    cout << "P kruga = " << (2*pi*r) <<endl;
    
    
    }    
void s (float a){
    
    cout << "S kvadrata =" << (pow (a,2))<< endl; 
    }  
void p (float a){
    
    cout << "P kvadrata =" << (4*a)<< endl; 
    }
void s (float a,float b,float h){
    
    cout << "S trapecii =" << (((a+b)/2)*h)<< endl; 
    }  
void p (float a,float b,float c,float d){
    
    cout << "P trapecii =" << (a+b+c+d)<< endl; 
    }     

    