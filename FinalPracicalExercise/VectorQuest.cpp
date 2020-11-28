#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    int count;
    cout << "Count of iterations: ";
    cin >> count;
    vector<int> myVector(5);
    ofstream out;
    out.open(".\\myvector.txt");
    for (int i = 1; i < count; i++)
    {
        myVector.push_back(i);
        out << myVector.back()<< "\t";
    }
    out << "Vector size of:" << myVector.size();
    out.close();
    return 1;
}