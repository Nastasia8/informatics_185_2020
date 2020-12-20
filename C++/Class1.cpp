    #include <iostream>
    #include <cmath>
    #include <cstdlib>
    #include <ctime>
    using namespace std;

    float fun(float x, float y, float z){
        return(pow(pow(x, 2)+pow(y, 2)+pow(z, 2), 1.0/2));
    }
    float skal(float x, float x2, float y, float y2, float z, float z2){
        return(x*x2+y*y2+z*z2);
    }
    float vek(float x, float y, float x2, float y2){
        return(x*y2-y*x2);
    }
    int main()
    {
    float x2, y2, z2;
    float x = 1;
    float y = 5;
    float z = 3;
    // 1
    cout << fun(x, y , z) << endl;
    // 2
    cout << "x="<< x/fun(x, y , z) << "\t"<<"y=" << y/fun(x, y , z)<< "\t"<< "z=" << z/fun(x, y , z)<< endl;
    // 3
    cout << "x2=";
    cin >> x2;
    cout<<endl;
    cout << "y2=";
    cin >> y2;
    cout<<endl;
    cout << "z2=";
    cin >> z2;
    cout<<endl;
    cout << skal(x, x2, y, y2, z, z2)<< endl;
    // 4
    float i = vek(y, z, y2, z2);
    float j = vek(x, z, x2, z2);
    float k = vek(x, y, x2, y2);
    cout <<"("<< i <<")" << "i"<<"-"<<"("<< j<< ")"<<"j"<< "+"<< "(" << k << ")" <<"k"<< endl;
    return 0;
    }

