#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    int count;
    cout << "Iteraciy: ";
    cin >> count;
    vector<int> Vector(5);
    ofstream fout;
    fout.open(".\\Vector.txt");
    for (int i = 1; i < count; i++)
    {
        Vector.push_back(i);
        cout<<Vector.back()<< "\t";
        fout << Vector.back()<< "\t";
    }
    cout<< "Razmer vectora:" << Vector.size();
    fout << "Razmer vectora:" << Vector.size();
    fout.close();
    return 1;
}