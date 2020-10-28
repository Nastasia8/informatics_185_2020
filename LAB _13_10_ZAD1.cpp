#include <iostream>
#include <cmath>
using namespace std;
float funslenght (float,float,float);
int main()
{
float x=1;
float y=5;
float z=3;
cout<<"funslenght="<<funslenght(x,y,z);
cout<<"unitvector=("<<x/funslenght(x,y,z)<<";"<<y/funslenght(x,y,z)<<";"<<z/funslenght(x,y,z)<<")"<<endl;
int x1;
int y1;
int z1;
cout<<"coordinates of 2 vector";
cin>>x1;
cin>>y1;
cin>>z1;
cout<<"coordinates of 2 vector=("<<x1<<";"<<y1<<";"<<z1<<")"<<endl;
cout<<"scalar product of vectors=("<<x*x1+y*y1+z*z1<<")"<<endl;
cout<<"vector product of vectors ="<<(y*z1-z*y1)<<"i"<<+(z*x1-x*z1)<<"J"<<+(x*y1-y*x1)<<"k"<<endl;

return 0;
}

float funslenght (float x,float y,float z)
{ return(sqrt(x*x+y*y+z*z));
}