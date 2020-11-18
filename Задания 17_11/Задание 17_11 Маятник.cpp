#include <iostream>
#include <math.h>
  using namespace std;

  class Maiatnik{
    protected:
 virtual void Chastota()=0;
 virtual void Period()=0;
 virtual void Type()=0;
  };

  class Fizi4eski: public Maiatnik{
    public:
     void Type()override{
     cout <<"Тип маятника физический"<<endl;
     }
void Period()override{
      float T,l,m;
cout <<endl<<"введите длину ";
cin >>l;
cout <<endl<<"введите массу ";
cin >>m;
T=2*M_PI*sqrt(l/(9.8*m));
cout <<"Период "<<T<<endl;
}
void Chastota()override{
      float l,w,S;
cout <<endl<<"введите длину ";
cin >>l;
cout <<endl<<"введите массу ";
cin >>S;
w=1/sqrt(l/S);
cout <<"Частота "<<w<<endl;
}


  };
  class Math: public Maiatnik{
    public:
void Type()override{
  cout <<"Тип маятника математический"<<endl;
     }
void Period()override{
float T,l;
cout <<endl<<"введите длину ";
cin >>l;
T=2*M_PI*sqrt(l/9.8);
cout <<"Период "<<T<<endl;
}
void Chastota()override{
float w,l;
cout <<endl<<"введите длину ";
cin >>l;
w=sqrt(9.8/l);
cout <<"Частота "<<w<<endl;
}
  };

  class PryIIIina: public Maiatnik{
public:
  void Type()override{
       cout <<"Тип маятника пружинный"<<endl;
     }
void Period()override{
float T,m,k;
cout <<endl<<"введите массу ";
cin >>m;
cout <<endl<<"введите жёскость ";
cin >>k;
T=2*M_PI*sqrt(m/k);
cout <<"Период "<<T<<endl;
}
void Chastota()override{
float w,k,m;
cout <<endl<<"введите жесткость ";
cin >>k;
cout <<endl<<"введите массу ";
cin >>m;
w=sqrt(k/m);
cout <<"Частота "<<w<<endl;
}
  };

int main() {
setlocale(LC_ALL, "Russian");
Math name;
name.Type();
name.Period();
name.Chastota();

PryIIIina name2;
name2.Type();
name2.Period();
name2.Chastota();

Fizi4eski name3;
name3.Type();
name3.Period();
name3.Chastota();

  return 0;
}
