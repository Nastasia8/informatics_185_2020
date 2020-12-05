#include <iostream>
#include <math.h>
#include <string>
  using namespace std;

  class Nalog{
  
    protected:
  virtual void nalog()=0;

  };

  

  class Avto: public Nalog{
    public:
      int n,m;
      float sum;
      string color;
 Avto ( int n,float sum,int m,string color){
 this-> n=n;
 this-> sum=sum;
  this-> m=m;
   this-> color=color;
    }
    void nalog()  override{
      int age;
      cout<<"Сколько месяцев прошло с года выпуска автомобиля ";
      cin>>age;
      float k;
      k=1;
if (sum >3000000 && sum <5000000 && age>=24 && age <=36 ){
  k=1.1;
}
if (sum >3000000 && sum <5000000  && age>=12 && age <=24){
  k=1.3;
}
if (sum >3000000 && sum <5000000  && age <=12){
  k=1.5;
}
if (sum >5000000 && sum <10000000  && age <=60){
  k=2;
}
if (sum >10000000 && sum <15000000  && age <=120){
  k=3;
}
if (sum >15000000  && age <=240){
  k=3;
}
if (n>0 && n<100){
sum=sum*2.5*(m/12)*k;
}
if (n>100 && n<150){
sum=sum*3.5*(m/12)*k;
}
if (n>150 && n<200){
sum=sum*5*(m/12)*k;
}
if (n>200 && n<250){
sum=sum*7.5*(m/12)*k;
}
if (n>250 ){
sum=sum*15*(m/12)*k;
}

cout<<"Для автомобиля "<<sum<<endl;
cout<<"Цвет "<<color<<endl;
  }

  
  };
class Avtobus: public Nalog{
   public:
       int n, sum,m;
       string name;
 Avtobus ( int n,int sum,int m,string name){
 this-> n=n;
 this-> sum=sum;
 this-> m=m;
 this-> name=name;
    }
  void nalog() override{
if (n>0 && n<200){
sum=sum*5*(m/12);
}
if (n>200){
sum=sum*10*(m/12);
}
cout<<"Для автобуса "<<sum<<endl;
cout<<"Рейс "<<name<<endl;
  }
  };

  class Moto: public Nalog{
     public:
         int n, sum,m;
         bool k;
 Moto ( int n,int sum,int m,bool k){
 this-> n=n;
  this-> m=m;
 this-> sum=sum;
  this-> k=k;
    }
   void nalog() override{
if (n>0 && n<20){
sum=sum*1*(m/12);
}
if (n>20 && n<35){
sum=sum*2*(m/12);
}
if (n>35 ){
sum=sum*5*(m/12);
}
cout<<"Для мотоцикла "<<sum<<endl;
cout<<"Наличие коляски "<<k<<endl;
  }
  
  };
  class Samolet: public Nalog{
     public:
         int sum,m;
         string company;
Samolet ( int sum,int m,string company){
this-> m=m;
 this-> sum=sum;
  this-> company=company;
    }
void nalog() override{
sum=sum*25*(m/12);
cout<<"Для самолёта "<<sum<<endl;
cout<<"Авиакомпания "<<company<<endl;
  }
  };


int main() {
  int n,sum,m;
   cout <<"введите мощность двигателя ";
  cin >> sum;
  cout <<endl;
 cout <<"введите стоимость ";
  cin >> n;
  cout <<endl;
   cout <<"количество месяцев владения ";
  cin >> m;
  cout <<endl;
Avto avto(n,sum,m,"black");
avto.nalog();
Moto moto(n,sum,m,0);
moto.nalog();
Avtobus avtobus(n,sum,m,"Иваново-Плёс");
avtobus.nalog();
Samolet samolet(sum,m,"Аэрофлот");
samolet.nalog();

  return 0;
}