#include <iostream>
#include <cmath>
using namespace std;

class Employee
{
private:
string name;
int data;
int koichas;
int st1ch;
int stag;
public:
Employee(string name, int data, int koichas, int st1ch,int stag)
{
this-> name=name;
this-> data=data;
this-> koichas=koichas;
this->st1ch=st1ch;
this-> stag=stag;
}
void Display()
{
cout<<"name="<<name<<endl;
cout<<"data="<<data<<endl;
cout<<"koichas="<<koichas<<endl;
cout<<"st1ch="<<st1ch<<endl;
cout<<"stag="<<stag<<endl;
}
float zarplata()
{

return(koichas*st1ch);
}
float a;
float premia()
{
if (stag>1 && stag<3)
{
return(0.03*koichas*st1ch);
}
else if (stag>3 && stag<6)
{
return(0.05*koichas*st1ch);
}
else if (stag>6 && stag<9)
{
return(0.07*koichas*st1ch);
}
else if (stag>10)
{
return(0.13*koichas*st1ch);
}
}
};
int main()
{
Employee Employee1("roma",40,80,20,15);
Employee1.Display();
cout<<"zarplata="<<Employee1.zarplata()<<endl;
cout<<"premia="<<Employee1.premia()<<endl;
cout<<endl;
Employee Employee2("routr",25,50,10,5);
Employee2.Display();
cout<<"zarplata="<<Employee2.zarplata()<<endl;
cout<<"premia="<<Employee2.premia()<<endl;
cout<<endl;
return 0;