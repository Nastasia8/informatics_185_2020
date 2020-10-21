// Shkolnikov Dmitriy
#include <iostream>
#include <cmath>
using namespace std;

float calculeteLengh (float,float,float);
void unitVector ();
void skalproizv (float,float,float);
void vectorproizv (float,float,float);
 float x=1,y=5,z=3;



int main()
{
   float x1,y1,z1;
  
    cout<< "Lengh=" << calculeteLengh (x,y,z)<<endl;
    unitVector();
    cout<<endl<< "x1=";
     cin >>x1;
   cout<< "y1=";
     cin >>y1;
    cout<< "z1=";
     cin >>z1; 
 skalproizv (x1,y1,z1);
 vectorproizv (x1,y1,z1);
}

float calculeteLengh (float x, float y, float z) {
    
    return (sqrt(pow(x,2)+pow(y,2)+pow(z,2)));
    
    }
void unitVector (){
    
    cout<<"A("<< x/calculeteLengh(x,y,z)<< "," << y/calculeteLengh(x,y,z)  << "," << z/calculeteLengh(x,y,z)<<")"; 

}
void skalproizv (float x1,float y1, float z1){
  
  cout << "skalpoizrv="<< (x*x1+y*y1+z*z1)<<endl ;
    
}
void vectorproizv (float x1,float y1 ,float z1){
    
    cout << "vectornoye proizvedenie=(" << (y*z1-y1*z) << "," <<(x*z1-x1*z)<< "," <<(x*y1-y*x1)<< ")";
    
    
}

    
    
    
    
    

    