#include <iostream>
#include <random>
#include <string>
using namespace std;

class Figure{
protected:
int size;
char simvol;
Figure(int size,char simvol){
this->size=size;
this->simvol=simvol;
}

};
class Box : public Figure{
  public:
Box(int size,char simvol): Figure(size,simvol){}
int size1;
void box(){
size1=size;
while (size1>=-1){
cout<<simvol<<" ";
size1--;}
cout<<endl;
for(int i=0;i < size;i++){
  for (int j=0;j < size;j++){
     if(j==0)
     cout<<simvol;
     if (j==size-1)
     cout<<"   "<<simvol;
     else 
     cout<<"  ";
  }
  cout<<endl;
}

size1=size;
while (size1>=-1){
cout<<simvol<<" ";
size1--;}
}



};
class Triangle : public Figure{
  int size1;
  public:
  Triangle(int size,int size1,char simvol): Figure(size,simvol){
    this->size1=size1;
  }
//нормальный треугольник//
void triangleset(){
  cout<<simvol<<endl;
for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
    if(j==0)
    cout<<simvol;
    if (i==j)
    cout<<simvol;
    else
    cout<<" ";
  }
  cout<<endl;
}

while (size1>0){
cout<<simvol;
size1--;}
}
  
void trianglenewset(){

while (size1>0){
cout<<simvol;
size1--;}
//перевёрнутый 3угольник//
 cout<<endl;
for(int i=0;i<size;i++){
  for(int j=0;j<size;j++){
    if(i+j==size-1)
    cout<<simvol;
    if (j==0&& i!=size-1){
      cout<<simvol;
    }
    else
    cout<<" ";
  }
 cout<<endl;
}
}


void triangleravn(){
  int x,y;
//равнобедренный 3угольник//
x=(size/2);
y=x;
for(int i=1;i < size-3;i++){
  for (int j=0;j < size;j++){
   if(j==x)
     cout<<simvol;
   if(j==y)
   cout<<simvol<<" ";
    else
    cout<<" ";
  }
  x--;
  y++;
  cout<<endl;
  }
while (size1>=0){
cout<<simvol<<" ";
size1--;}
cout<<endl;
}
};


class Triangleravn : public Figure{
  int size1;
  public:
Triangleravn(int size,int size1,char simvol): Figure(size,simvol){
  this->size1=size1;
}
void triang(){

}

};
class Rectangle : public Figure{
  int size1;
  public:
Rectangle(int size,int size1,char simvol): Figure(size,simvol){
  this->size1=size1;
}
void rect(){
  int x;
  x=size1;
while (size1>=0){
cout<<simvol<<" ";
size1--;}
cout<<endl;
for(int i=0;i < size;i++){
  for (int j=0;j < x;j++){
     if(j==0)
     cout<<simvol;
     if (j==x-1)
     cout<<" "<<simvol;
     else 
     cout<<"  ";
  }
  cout<<endl;
}
size1=x;
while (x>=0){
cout<<simvol<<" ";
x--;}
}

};
class Rhombus : public Figure{
  int x,y;
  public:
Rhombus(int size,char simvol): Figure(size,simvol){}

void rombik(){
  x=(size/2);
y=0;
while (y<x){
  cout<<" ";
  y++;
}
cout<<" "<<simvol;
while (y>0){
  cout<<" ";
  y--;
}
y=x;
cout<<endl;
for(int i=1;i < size;i++){
  for (int j=0;j < size;j++){
   if(j==x)
     cout<<simvol;
   if(j==y)
   cout<<" "<<simvol;
    else
    cout<<" ";
  }
  x--;
  y++;
  if(i!=size-1 && i!=size-2)
   cout<<endl;
  }
  y--;
  for(int i=-1;i < size-2;i++){
  for (int j=-1;j < size;j++){
   if(j==x)
     cout<<simvol;
   if(j==y)
   cout<<simvol;
    else
    cout<<" ";
  }
  x++;
  y--;
   cout<<endl;
  }
  x=(size/2);
y=0;
while (y<x){
  cout<<" ";
  y++;
}
cout<<" "<<simvol;
while (y>0){
  cout<<" ";
  y--;
}

}
};

class Mycat : public Figure{
  public:
Mycat(int size,char simvol): Figure(size,simvol){}
void print(){
cout<<endl<<endl;
cout<<"            ______"<<endl;
cout<<"          ／＞　  フ"<<endl;
cout<<"　　　　　| 　_　 _|"<<endl;
cout<<"　 　　　／`ミ _x 彡"<<endl;
cout<<"　　 　 /　　　 　 |"<<endl;
cout<<"　　　 /　 ヽ　　 ﾉ "<<endl;
cout<<"　／￣|　　 |　| |"<<endl;
cout<<"　| (￣ヽ＿_ヽ_)_)"<<endl;
cout<<"　＼二つ"<<endl;
cout<<endl;

}

};

int main() {
  char s=64;
  char s1=42;
  char s2=43;
  char s3=38;
Box square(5,s);
square.box();
cout<<endl<<endl;
Rectangle rectangle(3,10,s1);
rectangle.rect();
cout<<endl<<endl;
Triangle triangle(6,8,s2);
triangle.triangleset();
cout<<endl<<endl;
Triangle triangle2(9,5,s3);
triangle2.triangleravn();
cout<<endl<<endl;
Triangle triangle3(6,7,s1);
triangle3.trianglenewset();
cout<<endl<<endl;
Rhombus romb(5,s2);
romb.rombik();

Mycat cat(0,s3);
cat.print();

  return 0;
}