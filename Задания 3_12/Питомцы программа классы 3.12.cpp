#include <iostream>
#include <string>
using namespace std;
class Animal{
  protected:
string name, color;
int age;
public:
Animal(string name, int age, string color){
  this-> name=name;
  this-> age=age;
  this-> color=color;
}
public:
string getName(){
return name;
}

virtual void Speak()=0;
virtual void Show()=0;
};

class Cat : public Animal{
string sherst;
public:
Cat(string name, int age, string color,string sherst): Animal(name, age,color){
this-> sherst=sherst;
}
void Speak()override{
cout<< "says maaay"<<endl;

}

void Show()override{
cout<<"pet name "<< name<<endl;
cout<<"age "<<age<<endl;
cout<<"color "<<color<<endl;
cout<<"sherst "<< sherst<<endl;
}



};

class Doog : public Animal{
string breed;
public:
Doog(string name, int age, string color,string breed): Animal(name, age,color){
this->breed=breed;
}
void Speak()override{
cout <<"says dav-dav"<<endl;
}
void Show()override{
cout<<"pet name "<< name<<endl;
cout<<"age "<<age<<endl;
cout<<"color "<<color<<endl;
cout<<"breed "<< breed<<endl;
}


};
class Raccon : public Animal{
string eat;
public:
Raccon(string name, int age, string color,string eat): Animal(name, age,color){
this-> eat=eat;
}
void Speak()override{
cout <<"says xrym-xrym"<<endl;
}
void Show()override{
cout<<"pet name "<< name<<endl;
cout<<"age "<<age<<endl;
cout<<"color "<<color<<endl;
cout<<"eat "<< eat<<endl;
}

};

class Person{
  string name1;
public:
Person(string name1){
  this-> name1=name1;
}
void showname(){
cout <<name1<<endl;
}
void ShowMyPet(Animal *pet){
pet->Show();
}

};


int main(){
Cat persik("persik",2,"orange","pushistik");
persik.Show();
persik.Speak();
cout<<endl;
Doog bobic("bobic",3,"black","dalmatian");
bobic.Show();
bobic.Speak();
cout<<endl;
Raccon fedor("fedor",3,"poloska","apple");
fedor.Show();
fedor.Speak();
Person vasya("Vasya");
cout<<endl;
vasya.showname();
vasya.ShowMyPet(&persik);
  return 0;
}
