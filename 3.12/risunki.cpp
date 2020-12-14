#include  <iostream> 

using namespace std;

class Figure {

    public:

    virtual void show () =0;

};

class Rectangle :public Figure {

    public:
    void show () override {
        cout<< "Rectangle:"<< endl;
        cout << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << " ";
            for (int j = 0; j < 6; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }

};

class Square :public Figure {

public:
    void show () override {
        cout<< "Square:"<< endl;
        cout << endl;
        for (int i = 0; i < 7; i++)
        {
            cout << " ";
            for (int j = 0; j < 7; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }
    

};
class Isosceles_Triangle:public Figure {

public:
    void show () override {
        cout<< "Isosceles triangle:"<< endl;
        cout << endl;
        for (int i = 0; i < 8; i++)
        {   
            cout << " ";
            for (int j = 0; j < 8; j++)
            {   
                if (i>=j)
                {    
                    
                    cout << "*";
                }
                
                
            }
            cout << endl;
        }
        
    }

};

class Triangle:public Figure {

public:
    void show () override {
        cout<< "Triangle:"<< endl;
        cout << endl;
        for (int i = 0; i < 6; i++)
            {
            for (int j = 1; j < 6 - i; j++)
            {
                cout << " ";
            }   
    
            for (int j = 6 - 2 * i; j <= 6; j++)
            {
                cout << "*";
            }           
            cout << endl;
            }
 
    }
         
    

};

class Rhombus:public Figure {

public:
    void show () override {
        cout<< "Rhombus:"<< endl;
        cout << endl;
        int N = 11;
        int center = N / 2;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i <= center)
                {
                    if (j >= center - i && j <= center + i)
                        cout << "*";
                    else
                        cout << " ";
                }
                else
                {
                    if (j >= center + i - N + 1 && j <= center - i + N - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
        }
        cout << endl;
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
    Rectangle hmm ;
    hmm.show();    

    Square g;
    g.show();

    Isosceles_Triangle gd;
    gd.show();

    Triangle asd;
    asd.show();

    Rhombus asa;
    asa.show();

    Risunok nadpis;
    nadpis.show();

    system("pause");
    return 0;
}