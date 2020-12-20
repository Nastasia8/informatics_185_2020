    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
    float numbers[5] = {2.4f, 2.8f, 3.9f, 4.7, 3.16};
    float a, b;
    int i;
    a = 7.2f;
    b = 4.2f;
    for(i = 0; i <= 4; i++)
    {
        cout << pow((abs(a-b*numbers[i])/(pow(log10(numbers[i]),3))), 1.0/2.0)<< endl;
    }
    return 0;
    }
