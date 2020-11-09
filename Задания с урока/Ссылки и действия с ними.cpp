#include <iostream>
using namespace std;
void f(int *pa, int *pb, int *pc)
{

(*pc)=(*pc)*2;
(*pa)=(*pa)-1;
(*pb)=100;
}
int main() {
  int a, b, c;
  a=7;
  b=10;
  c=5;
  cout <<"a = " << a << "\n" ;
  cout << "b = "<< b << "\n" ;
  cout << "c = "<< c << "\n" ;
 int *pa=&a;
  int *pb=&b;
  int *pc=&c;
  f( &a, &b, &c);

  cout <<"a = " << a << "\n" ;
  cout << "b = "<< b << "\n" ;
  cout << "c = "<< c << "\n" ;
 
}

