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
      private:
      int l,m;
    public:
    Fizi4eski(int l,int m){
        this->m=m;
    this->l=l;
    }
     void Type()override{
     cout <<"Тип маятника физический"<<endl;
     }
void Period()override{
      float T;
T=2*M_PI*sqrt(l/(9.8*m));
cout <<"Период "<<T<<endl;
}
void Chastota()override{
      float w;
w=1/sqrt(l/m);
cout <<"Частота "<<w<<endl;
}


  };
  class Math: public Maiatnik{
      private:
      int l;
    public:
     Math(int l){
         this->l=l;
     }
  void Type() override{
  cout <<"Тип маятника математический"<<endl;
     }
void Period()override{
float T;
T=2*M_PI*sqrt(l/9.8);
cout <<"Период "<<T<<endl;
}
void Chastota()override{
float w;
w=sqrt(9.8/l);
cout <<"Частота "<<w<<endl;
}
  };

  class PryIIIina: public Maiatnik{
      private:
      int m,k;
public:
PryIIIina(int m,int k){
    this->m=m;
    this->k=k;
}
  void Type()override{
       cout <<"Тип маятника пружинный"<<endl;
     }
void Period()override{
float T;
T=2*M_PI*sqrt(m/k);
cout <<"Период "<<T<<endl;
}
void Chastota()override{
float w;
w=sqrt(k/m);
cout <<"Частота "<<w<<endl;
}
  };

int main() {
  int l;
  cout <<endl<<"введите длину ";
cin >>l;
Math name(l);
name.Type();
name.Period();
name.Chastota();
    
int m,k;
cout <<endl<<"введите массу ";
cin >>m;
cout <<endl<<"введите жёскость ";
cin >>k;
    
PryIIIina name2(m,k);
name2.Type();
name2.Period();
name2.Chastota();

cout <<endl<<"введите длину ";
cin >>l;
cout <<endl<<"введите массу ";
cin >>m;

Fizi4eski name3(l,m);
name3.Type();
name3.Period();
name3.Chastota();

  return 0;
}