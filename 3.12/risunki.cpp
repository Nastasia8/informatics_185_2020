#include  <iostream> 

using namespace std;

class Figure {

    public:

    virtual void show () =0;

};

class Rectangle :public Figure {
    private:
    int a,b;
    
    public:
    Rectangle (int a,int b) {
        this->a=a;
        this->b=b;

    }

    void show () override {
        cout<< "Rectangle:"<< endl;
        cout << endl;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=b;j++)
            {
            if ((i==1) or (j==1) or (i==a) or (j==b))cout<<"* ";
            else cout<<"  ";
            }
            cout<<endl;
        }
    }
};

class Square :public Figure {
private:
    int a;
    
    public:
    Square (int a) {
        this->a=a;
       

    }

    void show () override {
        cout<< "Square:"<< endl;
        cout << endl;
        for(int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
            {
            if ((i==1) or (j==1) or (i==a) or (j==a))cout<<"* ";
            else cout<<"  ";
            }
            cout<<endl;
        }
    }
};
class Isosceles_Triangle:public Figure {
private:
    int h;
    
public:
    Isosceles_Triangle (int h) {
        this->h=h;
       

    }

    void show () override {
        cout<< "Isosceles triangle:"<< endl;
        cout << endl;
        for (int i = 1; i <= h; i++)
        {   
            
            for (int j = 1; j <= h; j++)
            {   
                if (i==j or j==1 or i==h)
                {    
                    
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                
                
            }
            cout << endl;
        }
        
    }

};

class Triangle:public Figure {
private:
    int h;
    
public:
    Triangle (int h) {
        this->h=h;
       

    }
    void show () override {
        cout<< "Triangle:"<< endl;
        cout << endl;
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= h * 2; j++)
            {
                if (j == ((h + 1) - (i - 1)) or j == ((h + 1) + (i - 1)))
                    cout << "* ";
                else
                    if (i == h and j > 1)
                        cout << "* ";
                    else
                        cout << "  ";
            }
    
            cout << endl;
        }
 
    }
         
    

};

class Rhombus:public Figure {
private:
int digit;
public:
    Rhombus (int digit){
        this->digit=digit;
    }
    void show () override {
         cout<< "Rhombus:"<< endl;
         cout << endl;
         if (digit%2==1)
         {
             
         
         
            
            
            for (int i = 0; i<digit; i++)
            {
                for (int j = 0; j<digit; j++)
                {
                if ( j == digit / 2 + i or j == digit / 2 - i or j == i - digit / 2 or j==digit-i+digit/2-1)
                cout << "*";
                else
                cout << " ";
                }
                cout << endl;
            }
         }
         else
         {
             cout << "For rhombus should enter odd nubmber "<<endl ;
         }
            
    }

};

class Risunok :public Figure{
public:
void show () override{
    cout<< endl;
    cout<<     "******* *      *  *   *  \n"
               "*       * *    *  *     *\n"
               "******* *   *  *  *     *\n"
               "*       *    * *  *     *\n"
               "******* *      *  *  * \n"
    ;
}
};

int main (){
    Rectangle hmm (5,10);
    hmm.show();    

    Square g (10);
    g.show();

    Isosceles_Triangle gd (5);
    gd.show();

    Triangle asd(5);
    asd.show();

    Rhombus asa (15);
    asa.show();

    Risunok nadpis;
    nadpis.show();

    system("pause");
    return 0;
}
